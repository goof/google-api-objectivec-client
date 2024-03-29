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
//  GTLQueryPlus.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   plus/v1
// Description:
//   Google+ API
// Classes:
//   GTLQueryPlus (3 custom class methods, 7 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@interface GTLQueryPlus : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (retain) NSString *fields;

//
// Method-specific parameters; see the comments below for more information.
//
@property (retain) NSString *activityId;
@property (retain) NSString *alt;
@property (retain) NSString *collection;
@property (assign) NSUInteger maxResults;
@property (retain) NSString *pageToken;
@property (retain) NSString *userId;

#pragma mark -
#pragma mark "activities" methods
// These create a GTLQueryPlus object.

// Method: plus.activities.get
// Get an activity.
//  Required:
//   activityId: The ID of the activity to get.
//  Optional:
//   alt: Specifies an alternative representation type. (Default
//     kGTLPlusAltJson)
//      kGTLPlusAltJson: Use JSON format
//  Authorization scope(s):
//   kGTLAuthScopePlusMe
//   kGTLAuthScopePlusPeopleRecommended
// Fetches a GTLPlusActivity.
+ (id)queryForActivitiesGetWithActivityId:(NSString *)activityId;

// Method: plus.activities.list
// List all of the activities in the specified collection for a particular user.
//  Required:
//   userId: The ID of the user to get activities for. The special value "me"
//     can be used to indicate the authenticated user.
//   collection: The collection of activities to list.
//      kGTLPlusCollectionPublic: All public activities created by the specified
//        user.
//  Optional:
//   alt: Specifies an alternative representation type. (Default
//     kGTLPlusAltJson)
//      kGTLPlusAltJson: Use JSON format
//   maxResults: The maximum number of activities to include in the response,
//     used for paging. (1-100, default 20)
//   pageToken: The continuation token, used to page through large result sets.
//     To get the next page of results, set this parameter to the value of
//     "nextPageToken" from the previous response.
//  Authorization scope(s):
//   kGTLAuthScopePlusMe
//   kGTLAuthScopePlusPeopleRecommended
// Fetches a GTLPlusActivityFeed.
+ (id)queryForActivitiesListWithUserId:(NSString *)userId
                            collection:(NSString *)collection;

#pragma mark -
#pragma mark "people" methods
// These create a GTLQueryPlus object.

// Method: plus.people.get
// Get a person's profile.
//  Required:
//   userId: The ID of the person to get the profile for. The special value "me"
//     can be used to indicate the authenticated user.
//  Authorization scope(s):
//   kGTLAuthScopePlusMe
//   kGTLAuthScopePlusPeopleRecommended
// Fetches a GTLPlusPerson.
+ (id)queryForPeopleGetWithUserId:(NSString *)userId;

@end
