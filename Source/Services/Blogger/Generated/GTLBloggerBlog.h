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
//  GTLBloggerBlog.h
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
//   GTLBloggerBlog (0 custom class methods, 11 custom properties)
//   GTLBloggerBlogLocale (0 custom class methods, 3 custom properties)
//   GTLBloggerBlogPages (0 custom class methods, 2 custom properties)
//   GTLBloggerBlogPosts (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBloggerBlogLocale;
@class GTLBloggerBlogPages;
@class GTLBloggerBlogPosts;

// ----------------------------------------------------------------------------
//
//   GTLBloggerBlog
//

@interface GTLBloggerBlog : GTLObject

// The description of this blog. This is displayed underneath the title.
// Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
@property (retain) NSString *descriptionProperty;

// The identifier for this resource.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

// The kind of this entry. Always blogger#blog
@property (retain) NSString *kind;

// The locale this Blog is set to.
@property (retain) GTLBloggerBlogLocale *locale;

// The name of this blog. This is displayed as the title.
@property (retain) NSString *name;

// The container of pages in this blog.
@property (retain) GTLBloggerBlogPages *pages;

// The container of posts in this blog.
@property (retain) GTLBloggerBlogPosts *posts;

// RFC 3339 date-time when this blog was published.
@property (retain) GTLDateTime *published;

// The API REST URL to fetch this resource from.
@property (retain) NSString *selfLink;

// RFC 3339 date-time when this blog was last updated.
@property (retain) GTLDateTime *updated;

// The URL where this blog is published.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerBlogLocale
//

@interface GTLBloggerBlogLocale : GTLObject

// The country this blog's locale is set to.
@property (retain) NSString *country;

// The language this blog is authored in.
@property (retain) NSString *language;

// The language variant this blog is authored in.
@property (retain) NSString *variant;

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerBlogPages
//

@interface GTLBloggerBlogPages : GTLObject

// The URL of the container for pages in this blog.
@property (retain) NSString *selfLink;

// The count of pages in this blog.
@property (retain) NSNumber *totalItems;  // intValue

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerBlogPosts
//

@interface GTLBloggerBlogPosts : GTLObject

// The URL of the container for posts in this blog.
@property (retain) NSString *selfLink;

// The count of posts in this blog.
@property (retain) NSNumber *totalItems;  // intValue

@end
