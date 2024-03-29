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
//  GTLBloggerCommentList.h
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
//   GTLBloggerCommentList (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBloggerComment;

// ----------------------------------------------------------------------------
//
//   GTLBloggerCommentList
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLBloggerCommentList : GTLCollectionObject

// The List of Comments for a Post.
@property (retain) NSArray *items;  // of GTLBloggerComment

// The kind of this entry. Always blogger#commentList
@property (retain) NSString *kind;

// Pagination token to fetch the next page, if one exists.
@property (retain) NSString *nextPageToken;

// Pagination token to fetch the previous page, if one exists.
@property (retain) NSString *prevPageToken;

@end
