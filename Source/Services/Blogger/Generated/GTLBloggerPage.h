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
//  GTLBloggerPage.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBloggerPageAuthor;
@class GTLBloggerPageAuthorImage;
@class GTLBloggerPageBlog;

// ----------------------------------------------------------------------------
//
//   GTLBloggerPage
//

@interface GTLBloggerPage : GTLObject

// The author of this Page.
@property (retain) GTLBloggerPageAuthor *author;

// Data about the blog containing this Page.
@property (retain) GTLBloggerPageBlog *blog;

// The body content of this Page, in HTML.
@property (retain) NSString *content;

// The identifier for this resource.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

// The kind of this entity. Always blogger#page
@property (retain) NSString *kind;

// RFC 3339 date-time when this Page was published.
@property (retain) GTLDateTime *published;

// The API REST URL to fetch this resource from.
@property (retain) NSString *selfLink;

// The title of this entity. This is the name displayed in the Admin user
// interface.
@property (retain) NSString *title;

// RFC 3339 date-time when this Page was last updated.
@property (retain) GTLDateTime *updated;

// The URL that this Page is displayed at.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageAuthor
//

@interface GTLBloggerPageAuthor : GTLObject

// The display name.
@property (retain) NSString *displayName;

// The identifier of the Page creator.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

// The page author's avatar.
@property (retain) GTLBloggerPageAuthorImage *image;

// The URL of the Page creator's Profile page.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageBlog
//

@interface GTLBloggerPageBlog : GTLObject

// The identifier of the blog containing this page.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerPageAuthorImage
//

@interface GTLBloggerPageAuthorImage : GTLObject

// The page author's avatar URL.
@property (retain) NSString *url;

@end
