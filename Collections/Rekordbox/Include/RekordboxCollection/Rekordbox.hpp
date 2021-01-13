//
//  Rekord Buddy - The future proof music collection tool made by DJs for DJs.
//  Copyright (C) 2020-2021 Didier Malenfant (didier@rekordbuddy.org)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#pragma once

#include <CommonCollection/Collection.hpp>

#include <Base/Array.hpp>
#include <Base/FilePath.hpp>
#include <Base/Types.hpp>

namespace NxA { namespace Rekordbox {

// -- Functions
void setCurrentRekordBuddyVersion(const String&);
FilePath rekordboxXMLBridgeFilePath();
Directory rekordboxXMLBridgeDirectoryPath();
count approximateNumberOfAvailableRekordboxCollections();
Array<Common::CollectionOfSomeSort> availableRekordboxCollectionsWithPerCollectionProgressCallBack(const std::function<void(void)>&);
boolean addUserCollectionAt(const FilePath&);
boolean removeUserCollectionAt(const FilePath&);

} }
