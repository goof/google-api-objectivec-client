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
//  GTLBloggerComment.h
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

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLBloggerCommentAuthor;
@class GTLBloggerCommentAuthorImage;
@class GTLBloggerCommentBlog;
@class GTLBloggerCommentPost;

// ----------------------------------------------------------------------------
//
//   GTLBloggerComment
//

@interface GTLBloggerComment : GTLObject

// The author of this Comment.
@property (retain) GTLBloggerCommentAuthor *author;

// Data about the blog containing this comment.
@property (retain) GTLBloggerCommentBlog *blog;

// The actual content of the comment. May include HTML markup.
@property (retain) NSString *content;

// The identifier for this resource.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

// The kind of this entry. Always blogger#comment
@property (retain) NSString *kind;

// Data about the post containing this comment.
@property (retain) GTLBloggerCommentPost *post;

// RFC 3339 date-time when this comment was published.
@property (retain) GTLDateTime *published;

// The API REST URL to fetch this resource from.
@property (retain) NSString *selfLink;

// RFC 3339 date-time when this comment was last updated.
@property (retain) GTLDateTime *updated;

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerCommentAuthor
//

@interface GTLBloggerCommentAuthor : GTLObject

// The display name.
@property (retain) NSString *displayName;

// The identifier of the Comment creator.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

// The comment creator's avatar.
@property (retain) GTLBloggerCommentAuthorImage *image;

// The URL of the Comment creator's Profile page.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerCommentBlog
//

@interface GTLBloggerCommentBlog : GTLObject

// The identifier of the blog containing this comment.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerCommentPost
//

@interface GTLBloggerCommentPost : GTLObject

// The identifier of the post containing this comment.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSNumber *identifier;  // longLongValue

@end


// ----------------------------------------------------------------------------
//
//   GTLBloggerCommentAuthorImage
//

@interface GTLBloggerCommentAuthorImage : GTLObject

// The comment creator's avatar URL.
@property (retain) NSString *url;

@end
