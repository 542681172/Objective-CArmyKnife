@import UIKit;

@interface UIView (CGRect)

@property CGFloat x;
@property CGFloat y;
@property CGFloat width;
@property CGFloat height;

@end

@interface UIView (CALayer)

- (void)setRoundedCorners:(UIRectCorner)corners radius:(CGSize)size;

@end


#ifndef kDuration
#define kDuration (0.5)
#endif

@interface UIView (Animation)

- (void)defaultShakeAnimation;
- (void)shakeAnimationWithMargin:(CGFloat)margin duration:(CGFloat)duration repeatCount:(CGFloat)repeatCount;

/**
 *  旋转360度动画
 */
- (void)defaultRotateAnimation;

/**
 *  动画旋转
 *
 *  @param fromValue      动画旋转开始的位置
 *  @param toValue        动画旋转到特定的位置
 *  @param duration       动画旋转的时间
 *  @param repeatCount    动画重复旋转的次数
 */
- (void)rotateAnimationFrom:(CGFloat)fromValue to:(CGFloat)toValue duration:(CGFloat)duration repeatCount:(CGFloat)repeatCount;

/**
 *  弹性动画
 */
- (void)defaultBounceAnimation;

/**
 *  设置弹性动画
 *
 *  @param values         弹性动画的效果（蹦蹦跳跳的感觉）
 *  @param duration       弹性动画的时间（默认0.5秒）
 *  @param repeatCount    弹性动画的重复次数（默认是0次）
 */
- (void)bounceAnimationWithValues:(NSArray *)values duration:(CGFloat)duration repeatCount:(CGFloat)repeatCount;

@end

//@interface UIView (TextSize)
//
//- (CGSize)boundingRectWithSize:(CGSize)size;
//
//@end




