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
//  GTLQueryAnalytics.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Analytics API (analytics/v3)
// Description:
//   View and manage your Google Analytics data
// Documentation:
//   http://code.google.com/apis/analytics
// Classes:
//   GTLQueryAnalytics (5 custom class methods, 6 custom properties)

#import "GTLQueryAnalytics.h"

#import "GTLAnalyticsAccounts.h"
#import "GTLAnalyticsGoals.h"
#import "GTLAnalyticsProfiles.h"
#import "GTLAnalyticsSegments.h"
#import "GTLAnalyticsWebproperties.h"

@implementation GTLQueryAnalytics

@dynamic accountId, fields, maxResults, profileId, startIndex, webPropertyId;

+ (NSDictionary *)parameterNameMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"max-results", @"maxResults",
      @"start-index", @"startIndex",
      nil];
  return map;
}

#pragma mark -
#pragma mark "management.accounts" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementAccountsList {
  NSString *methodName = @"analytics.management.accounts.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLAnalyticsAccounts class];
  return query;
}

#pragma mark -
#pragma mark "management.goals" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementGoalsListWithAccountId:(NSString *)accountId
                                 webPropertyId:(NSString *)webPropertyId
                                     profileId:(NSString *)profileId {
  NSString *methodName = @"analytics.management.goals.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.profileId = profileId;
  query.expectedObjectClass = [GTLAnalyticsGoals class];
  return query;
}

#pragma mark -
#pragma mark "management.profiles" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementProfilesListWithAccountId:(NSString *)accountId
                                    webPropertyId:(NSString *)webPropertyId {
  NSString *methodName = @"analytics.management.profiles.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.webPropertyId = webPropertyId;
  query.expectedObjectClass = [GTLAnalyticsProfiles class];
  return query;
}

#pragma mark -
#pragma mark "management.segments" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementSegmentsList {
  NSString *methodName = @"analytics.management.segments.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.expectedObjectClass = [GTLAnalyticsSegments class];
  return query;
}

#pragma mark -
#pragma mark "management.webproperties" methods
// These create a GTLQueryAnalytics object.

+ (id)queryForManagementWebpropertiesListWithAccountId:(NSString *)accountId {
  NSString *methodName = @"analytics.management.webproperties.list";
  GTLQueryAnalytics *query = [self queryWithMethodName:methodName];
  query.accountId = accountId;
  query.expectedObjectClass = [GTLAnalyticsWebproperties class];
  return query;
}

@end
