//
//  MahjonggAppDelegate.h
//  Mahjongg
//
//  Created by GamePipe Iphone Dev on 7/28/09.
//  Copyright USC 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AdManager.h"
#import "ScoreManager.h"


@interface MahjonggAppDelegate : NSObject <UIApplicationDelegate, GKLeaderboardViewControllerDelegate> {
    UIWindow *window;
    UIViewController *placeHolderViewController;
    UIView *gameView;
    AdManager* adManager;
    ScoreManager* scoreManager;
    GKLeaderboardViewController *leaderboardController;
}

- (void) showLeaderboard;

@end

