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
//  GTLBloggerPage.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Blogger API (blogger/v2)
// Description:
//   API for access to the data within Blogger.
// Documentation:
//   https://code.google.com/apis/blogger/docs/2.0/json/getting_started.html
// Classes:
//   GTLBloggerPage (0 custom class methods, 10 custom properties)
//   GTLBloggerPageAuthor (0 custom class methods, 4 custom properties)
//   GTLBloggerPageBlog (0 custom class methods, 1 custom properties)
//   GTLBloggerPageAuthorImage (0 custom class methods, 1 custom properties)

#import "GTLBloggerPage.h"

// ----------------------------------------------------------------------------
//
//   GTLBloggerPage
//

@implementation GTLBloggerPage
@dynamic author, blog, content, identifier, kind, published, selfLink, title,
         updated, url;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"blogger#page"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageAuthor
//

@implementation GTLBloggerPageAuthor
@dynamic displayName, identifier, image, url;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageBlog
//

@implementation GTLBloggerPageBlog
@dynamic identifier;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageAuthorImage
//

@implementation GTLBloggerPageAuthorImage
@dynamic url;
@end
