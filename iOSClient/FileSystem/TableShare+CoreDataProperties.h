//
//  TableShare+CoreDataProperties.h
//  Crypto Cloud Technology Nextcloud
//
//  Created by Marino Faggiana on 20/01/16.
//  Copyright (c) 2014 TWS. All rights reserved.
//
//  Author Marino Faggiana <m.faggiana@twsweb.it>
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
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import "TableShare.h"

NS_ASSUME_NONNULL_BEGIN

@interface TableShare (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *account;
@property (nullable, nonatomic, retain) NSDate *dateRecord;
@property (nullable, nonatomic, retain) NSString *shareLink;
@property (nullable, nonatomic, retain) NSString *shareUserAndGroup;
@property (nullable, nonatomic, retain) NSString *fileName;
@property (nullable, nonatomic, retain) NSString *serverUrl;

@end

NS_ASSUME_NONNULL_END
