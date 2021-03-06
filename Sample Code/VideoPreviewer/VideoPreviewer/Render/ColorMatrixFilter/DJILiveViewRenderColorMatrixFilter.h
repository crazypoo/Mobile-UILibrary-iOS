//
//  DJILiveViewRenderColorMatrixFilter.h
//  DJIWidget
//
//  Created by ai.chuyue on 2016/10/27.
//  Copyright © 2016年 Jerome.zhang. All rights reserved.
//

#import "DJILiveViewRenderFilter.h"

@interface DJILiveViewRenderColorMatrixFilter : DJILiveViewRenderFilter
{
    GLint colorMatrixUniform;
    GLint intensityUniform;
}

/** A 4x4 matrix used to transform each color in an image
 */
@property(readwrite, nonatomic) DJIGPUMatrix4x4 colorMatrix;

/** The degree to which the new transformed color replaces the original color for each pixel
 */
@property(readwrite, nonatomic) CGFloat intensity;

@end
