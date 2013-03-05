//
//  qdAppDelegate.h
//  myStore
//
//  Created by Brian Mishler on 3/5/13.
//  Copyright (c) 2013 Brian Mishler. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface qdAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
