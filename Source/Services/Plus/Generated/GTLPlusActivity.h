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
//  GTLPlusActivity.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   plus/v1
// Description:
//   Google+ API
// Classes:
//   GTLPlusActivity (0 custom class methods, 19 custom properties)
//   GTLPlusActivityActor (0 custom class methods, 4 custom properties)
//   GTLPlusActivityObject (0 custom class methods, 10 custom properties)
//   GTLPlusActivityProvider (0 custom class methods, 1 custom properties)
//   GTLPlusActivityActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectActor (0 custom class methods, 4 custom properties)
//   GTLPlusActivityObjectAttachmentsItem (0 custom class methods, 8 custom properties)
//   GTLPlusActivityObjectPlusoners (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectReplies (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectResharers (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectActorImage (0 custom class methods, 1 custom properties)
//   GTLPlusActivityObjectAttachmentsItemEmbed (0 custom class methods, 2 custom properties)
//   GTLPlusActivityObjectAttachmentsItemFullImage (0 custom class methods, 4 custom properties)
//   GTLPlusActivityObjectAttachmentsItemImage (0 custom class methods, 4 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLPlusAcl;
@class GTLPlusActivityActor;
@class GTLPlusActivityActorImage;
@class GTLPlusActivityObject;
@class GTLPlusActivityObjectActor;
@class GTLPlusActivityObjectActorImage;
@class GTLPlusActivityObjectAttachmentsItem;
@class GTLPlusActivityObjectAttachmentsItemEmbed;
@class GTLPlusActivityObjectAttachmentsItemFullImage;
@class GTLPlusActivityObjectAttachmentsItemImage;
@class GTLPlusActivityObjectPlusoners;
@class GTLPlusActivityObjectReplies;
@class GTLPlusActivityObjectResharers;
@class GTLPlusActivityProvider;

// ----------------------------------------------------------------------------
//
//   GTLPlusActivity
//

@interface GTLPlusActivity : GTLObject

// Identifies who has access to see this activity.
@property (retain) GTLPlusAcl *access;

// The person who performed this activity.
@property (retain) GTLPlusActivityActor *actor;

// Street address where this activity occurred.
@property (retain) NSString *address;

// Additional content added by the person who shared this activity, applicable
// only when resharing an activity.
@property (retain) NSString *annotation;

// If this activity is a crosspost from another system, this property specifies
// the ID of the original activity.
@property (retain) NSString *crosspostSource;

// Latitude and longitude where this activity occurred. Format is latitude
// followed by longitude, space separated.
@property (retain) NSString *geocode;

// The ID of this activity.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// Identifies this resource as an activity. Value: "plus#activity".
@property (retain) NSString *kind;

// The object of this activity.
@property (retain) GTLPlusActivityObject *object;

@property (retain) NSNumber *placeholder;  // boolValue

// ID of the place where this activity occurred.
@property (retain) NSString *placeId;

// Name of the place where this activity occurred.
@property (retain) NSString *placeName;

// The service provider that initially published this activity.
@property (retain) GTLPlusActivityProvider *provider;

// The time at which this activity was initially published. Formatted as an RFC
// 3339 timestamp.
@property (retain) GTLDateTime *published;

// Radius, in meters, of the region where this activity occurred, centered at
// the latitude and longitude identified in geocode.
@property (retain) NSString *radius;

// Title of this activity.
@property (retain) NSString *title;

// The time at which this activity was last updated. Formatted as an RFC 3339
// timestamp.
@property (retain) GTLDateTime *updated;

@property (retain) NSString *url;

// This activity's verb, indicating what action was performed. Possible values
// are: - "post" - Publish content to the stream. - "checkin" - Check in to a
// location. - "share" - Reshare an activity.
@property (retain) NSString *verb;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityActor
//

@interface GTLPlusActivityActor : GTLObject

// The name of the actor, suitable for display.
@property (retain) NSString *displayName;

// The ID of the actor's person resource.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// The image representation of the actor.
@property (retain) GTLPlusActivityActorImage *image;

// The link to the actor's Google profile.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObject
//

@interface GTLPlusActivityObject : GTLObject

// If this activity's object is itself another activity (for example, when a
// person reshares an activity), this property specifies the original activity's
// actor.
@property (retain) GTLPlusActivityObjectActor *actor;

// The media objects attached to this activity.
@property (retain) NSArray *attachments;  // of GTLPlusActivityObjectAttachmentsItem

// The HTML-formatted content, suitable for display. When creating or updating
// an activity, this value must be supplied as plain text in the request. If
// successful, the response will contain the HTML-formatted content. When
// updating an activity, use originalContent as the starting value, then assign
// the updated text to this property.
@property (retain) NSString *content;

// The ID of the object. When resharing an activity, this is the ID of the
// activity being reshared.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// The type of the object. Possible values are: - "note" - Textual content. -
// "activity" - A Google+ activity.
@property (retain) NSString *objectType;

// The content (text) as provided by the author, stored without any HTML
// formatting. When updating an activity's content, use the value of
// originalContent as the starting point from which to make edits.
@property (retain) NSString *originalContent;

// People who +1'd this activity.
@property (retain) GTLPlusActivityObjectPlusoners *plusoners;

// Comments in reply to this activity.
@property (retain) GTLPlusActivityObjectReplies *replies;

// People who reshared this activity.
@property (retain) GTLPlusActivityObjectResharers *resharers;

// The URL that points to the linked resource.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityProvider
//

@interface GTLPlusActivityProvider : GTLObject

// Name of the service provider.
@property (retain) NSString *title;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityActorImage
//

@interface GTLPlusActivityActorImage : GTLObject

// The URL of the actor's profile photo. To re-size the image and crop it to a
// square, append the query string ?sz=x, where x is the dimension in pixels of
// each side.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectActor
//

@interface GTLPlusActivityObjectActor : GTLObject

// The original actor's name, suitable for display.
@property (retain) NSString *displayName;

// ID of the original actor.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// The image representation of the original actor.
@property (retain) GTLPlusActivityObjectActorImage *image;

// A link to the original actor's Google profile.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItem
//

@interface GTLPlusActivityObjectAttachmentsItem : GTLObject

// If the attachment is an article, this property contains a snippet of text
// from the article.
@property (retain) NSString *content;

// The title of the attachment (such as a photo caption or an article title).
@property (retain) NSString *displayName;

// If the attachment is a video, the embeddable link.
@property (retain) GTLPlusActivityObjectAttachmentsItemEmbed *embed;

// The full image url for photo attachments.
@property (retain) GTLPlusActivityObjectAttachmentsItemFullImage *fullImage;

// The ID of the media object's resource.
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (retain) NSString *identifier;

// The preview image for photos or videos.
@property (retain) GTLPlusActivityObjectAttachmentsItemImage *image;

// The type of media object. Possible values are: - "photo" - A photo. - "video"
// - A video. - "article" - An article, specified by a link.
@property (retain) NSString *objectType;

// The link to the attachment, should be of type text/html.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectPlusoners
//

@interface GTLPlusActivityObjectPlusoners : GTLObject

// Total number of people who +1'd this activity.
@property (retain) NSNumber *totalItems;  // unsignedIntValue

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectReplies
//

@interface GTLPlusActivityObjectReplies : GTLObject

// Total number of comments on this activity.
@property (retain) NSNumber *totalItems;  // unsignedIntValue

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectResharers
//

@interface GTLPlusActivityObjectResharers : GTLObject

// Total number of people who reshared this activity.
@property (retain) NSNumber *totalItems;  // unsignedIntValue

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectActorImage
//

@interface GTLPlusActivityObjectActorImage : GTLObject

// A URL that points to a thumbnail photo of the original actor.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItemEmbed
//

@interface GTLPlusActivityObjectAttachmentsItemEmbed : GTLObject

// Media type of the link.
@property (retain) NSString *type;

// URL of the link.
@property (retain) NSString *url;

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItemFullImage
//

@interface GTLPlusActivityObjectAttachmentsItemFullImage : GTLObject

// The height, in pixels, of the linked resource.
@property (retain) NSNumber *height;  // unsignedIntValue

// Media type of the link.
@property (retain) NSString *type;

// URL of the link.
@property (retain) NSString *url;

// The width, in pixels, of the linked resource.
@property (retain) NSNumber *width;  // unsignedIntValue

@end


// ----------------------------------------------------------------------------
//
//   GTLPlusActivityObjectAttachmentsItemImage
//

@interface GTLPlusActivityObjectAttachmentsItemImage : GTLObject

// The height, in pixels, of the linked resource.
@property (retain) NSNumber *height;  // unsignedIntValue

// Media type of the link.
@property (retain) NSString *type;

// URL of the link.
@property (retain) NSString *url;

// The width, in pixels, of the linked resource.
@property (retain) NSNumber *width;  // unsignedIntValue

@end
