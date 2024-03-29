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
//  GTLShoppingProduct.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Search API for Shopping (shopping/v1)
// Description:
//   Lets you search over product data
// Documentation:
//   http://code.google.com/apis/shopping/search/v1/getting_started.html
// Classes:
//   GTLShoppingProduct (0 custom class methods, 7 custom properties)
//   GTLShoppingProductRecommendationsItem (0 custom class methods, 2 custom properties)
//   GTLShoppingProductRecommendationsItemRecommendationListItem (0 custom class methods, 1 custom properties)

#import "GTLShoppingProduct.h"

#import "GTLShoppingModelCategory.h"
#import "GTLShoppingModelDebug.h"
#import "GTLShoppingModelProduct.h"

// ----------------------------------------------------------------------------
//
//   GTLShoppingProduct
//

@implementation GTLShoppingProduct
@dynamic categories, debug, identifier, kind, product, recommendations,
         selfLink;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:@"id"
                                forKey:@"identifier"];
  return map;
}

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      [GTLShoppingModelCategory class], @"categories",
      [GTLShoppingProductRecommendationsItem class], @"recommendations",
      nil];
  return map;
}

+ (void)load {
  [self registerObjectClassForKind:@"shopping#product"];
}

@end


// ----------------------------------------------------------------------------
//
//   GTLShoppingProductRecommendationsItem
//

@implementation GTLShoppingProductRecommendationsItem
@dynamic recommendationList, type;

+ (NSDictionary *)arrayPropertyToClassMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObject:[GTLShoppingProductRecommendationsItemRecommendationListItem class]
                                forKey:@"recommendationList"];
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLShoppingProductRecommendationsItemRecommendationListItem
//

@implementation GTLShoppingProductRecommendationsItemRecommendationListItem
@dynamic product;
@end
