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
//  GTLBloggerComment.m
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
//   GTLBloggerComment (0 custom class methods, 9 custom properties)
//   GTLBloggerCommentAuthor (0 custom class methods, 4 custom properties)
//   GTLBloggerCommentBlog (0 custom class methods, 1 custom properties)
//   GTLBloggerCommentPost (0 custom class methods, 1 custom properties)
//   GTLBloggerCommentAuthorImage (0 custom class methods, 1 custom properties)

#import "GTLBloggerComment.h"

// ----------------------------------------------------------------------------
//
//   GTLBloggerComment
//

@implementation GTLBloggerComment
@dynamic author, blog, content, identifier, kind, post, published, selfLink,
         updated;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"blogger#comment"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerCommentAuthor
//

@implementation GTLBloggerCommentAuthor
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
//   GTLBloggerCommentBlog
//

@implementation GTLBloggerCommentBlog
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
//   GTLBloggerCommentPost
//

@implementation GTLBloggerCommentPost
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
//   GTLBloggerCommentAuthorImage
//

@implementation GTLBloggerCommentAuthorImage
@dynamic url;
@end
