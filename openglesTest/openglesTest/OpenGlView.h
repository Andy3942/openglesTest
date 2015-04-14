//
//  OpenGlView.h
//  openglesTest
//
//  Created by bzx on 4/13/15.
//  Copyright (c) 2015 bzx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    GLuint _frameBuffer;
    GLuint _programHandle;
    GLuint _positionSlot;
}
@end
