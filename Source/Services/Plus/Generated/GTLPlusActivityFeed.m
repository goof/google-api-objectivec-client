/* Copyright (c) 2011 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLPlusActivityFeed.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   plus/v1
// Description:
//   Google+ API
// Classes:
//   GTLPlusActivityFeed (0 custom class methods, 8 custom properties)

#import "GTLPlusActivityFeed.h"

#import "GTLPlusActivity.h"

// ----------------------------------------------------------------------------
//
//   GTLPlusActivityFeed
//

@implementation GTLPlusActivityFeed
@dynamic identifier, items, kind, nextLink, nextPageToken, selfLink, title,
         updated;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLPlusActivity class]
                                forKey:@"items"];
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"plus#activityFeed"];
}

@end
