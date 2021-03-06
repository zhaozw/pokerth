/*****************************************************************************
 * PokerTH - The open source texas holdem engine                             *
 * Copyright (C) 2006-2012 Felix Hammer, Florian Thauer, Lothar May          *
 *                                                                           *
 * This program is free software: you can redistribute it and/or modify      *
 * it under the terms of the GNU Affero General Public License as            *
 * published by the Free Software Foundation, either version 3 of the        *
 * License, or (at your option) any later version.                           *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU Affero General Public License for more details.                       *
 *                                                                           *
 * You should have received a copy of the GNU Affero General Public License  *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.     *
 *                                                                           *
 *                                                                           *
 * Additional permission under GNU AGPL version 3 section 7                  *
 *                                                                           *
 * If you modify this program, or any covered work, by linking or            *
 * combining it with the OpenSSL project's OpenSSL library (or a             *
 * modified version of that library), containing parts covered by the        *
 * terms of the OpenSSL or SSLeay licenses, the authors of PokerTH           *
 * (Felix Hammer, Florian Thauer, Lothar May) grant you additional           *
 * permission to convey the resulting work.                                  *
 * Corresponding Source for a non-source form of such a combination          *
 * shall include the source code for the parts of OpenSSL used as well       *
 * as that of the covered work.                                              *
 *****************************************************************************/

#include "clientenginefactory.h"

#include "clienthand.h"
#include "clientboard.h"
#include "clientplayer.h"
#include "clientbero.h"



ClientEngineFactory::ClientEngineFactory()
{
}


ClientEngineFactory::~ClientEngineFactory()
{
}


boost::shared_ptr<HandInterface>
ClientEngineFactory::createHand(boost::shared_ptr<EngineFactory> f, GuiInterface *g, boost::shared_ptr<BoardInterface> b, Log *l, PlayerList sl, PlayerList apl, PlayerList rpl, int id, int sP, int dP, int sB,int sC)
{
	return boost::shared_ptr<HandInterface>(new ClientHand(f, g, b, l, sl, apl, rpl, id, sP, dP, sB, sC));
}

boost::shared_ptr<BoardInterface>
ClientEngineFactory::createBoard()
{
    return boost::shared_ptr<BoardInterface>(new ClientBoard());
}

boost::shared_ptr<PlayerInterface>
ClientEngineFactory::createPlayer(int id, unsigned uniqueId, PlayerType type, std::string name, std::string avatar, int sC, bool aS, bool sotS, int mB)
{
	return boost::shared_ptr<PlayerInterface>(new ClientPlayer(NULL, id, uniqueId, type, name, avatar, sC, aS, sotS, mB));
}

std::vector<boost::shared_ptr<BeRoInterface> >
ClientEngineFactory::createBeRo(HandInterface *hi, unsigned dP, int sB)
{
	std::vector<boost::shared_ptr<BeRoInterface> > myBeRo;

	myBeRo.push_back(boost::shared_ptr<BeRoInterface>(new ClientBeRo(hi, dP, sB, GAME_STATE_PREFLOP)));
	myBeRo.push_back(boost::shared_ptr<BeRoInterface>(new ClientBeRo(hi, dP, sB, GAME_STATE_FLOP)));
	myBeRo.push_back(boost::shared_ptr<BeRoInterface>(new ClientBeRo(hi, dP, sB, GAME_STATE_TURN)));
	myBeRo.push_back(boost::shared_ptr<BeRoInterface>(new ClientBeRo(hi, dP, sB, GAME_STATE_RIVER)));
	myBeRo.push_back(boost::shared_ptr<BeRoInterface>(new ClientBeRo(hi, dP, sB, GAME_STATE_POST_RIVER)));

	return myBeRo;

}

