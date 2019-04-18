// Copyright 2019-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

#import "MDCInputTextField.h"
#import "MaterialContainerScheme.h"

/**
 This category is used to style MDCInputTextField instances with an MDCContainerScheme.
 */
@interface MDCInputTextField (MaterialTheming)

/**
 Applies a container scheme's subsystem-specific schemes to the receiver.

 @param scheme A container scheme instance.
 */
- (void)applyThemeWithScheme:(nonnull id<MDCContainerScheming>)scheme;

@end