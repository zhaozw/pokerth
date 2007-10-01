/***************************************************************************
 *   Copyright (C) 2007 by Lothar May                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#include "convhelper.h"

#ifdef _WIN32
#error This file is not for Windows.
#endif

#include <string>
#include <iostream>

#include <iconv.h>
#include <errno.h>

using namespace std;

string
ConvHelper::NativeToUtf8(const std::string &inStr)
{
	string retStr(inStr);
	size_t insize = inStr.length();
	char *inbuf = const_cast<char *>(inStr.data());

	const size_t c_outsize = insize * 6; // max size of utf-8 char is 6 per input char
	size_t outsize = c_outsize;
	char *c_outbuf = new char[outsize];
	char *outbuf = c_outbuf;

	//nl_langinfo(CODESET)
	iconv_t conversion = iconv_open("UTF-8", "ISO-8859-1");

	if (conversion == (iconv_t)(-1))
		cout << "iconv_open() failed: " << strerror(errno) << endl;
	else
	{
		size_t retval = iconv(conversion, &inbuf, &insize, &outbuf, &outsize);

		if (retval == -1)
			cout << "iconv() failed: " << strerror(errno) << endl;
		retStr = string(c_outbuf, c_outsize - outsize);
	}
	delete[] c_outbuf;

	iconv_close(conversion);
	return retStr;
}

string
ConvHelper::Utf8ToNative(const std::string &inStr)
{
	string retStr(inStr);
	size_t insize = inStr.length();
	char *inbuf = const_cast<char *>(inStr.data());

	const size_t c_outsize = insize;
	size_t outsize = c_outsize;
	char *c_outbuf = new char[outsize];
	char *outbuf = c_outbuf;

	iconv_t conversion = iconv_open("ISO-8859-1", "UTF-8");

	if (conversion == (iconv_t)(-1))
		cout << "iconv_open() failed: " << strerror(errno) << endl;
	else
	{
		size_t retval = iconv(conversion, &inbuf, &insize, &outbuf, &outsize);

		if (retval == -1)
			cout << "iconv() failed: " << strerror(errno) << endl;
		retStr = string(c_outbuf, c_outsize - outsize);
	}
	delete[] c_outbuf;

	iconv_close(conversion);
	return retStr;
}

