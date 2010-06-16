//
//  fitnessViewController.h
//  fitness
//
//  Created by Prabin Deka on 16/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface fitnessViewController : UIViewController<UISearchDisplayDelegate, UISearchBarDelegate> {
	
	NSArray         *listContent;           // The master content.
    NSMutableArray  *filteredListContent;   // The content filtered as a result of a search.
    
    // The saved state of the search UI if a memory warning removed the view.ß
    NSString        *savedSearchTerm;
    NSInteger       savedScopeButtonIndex;
    BOOL            searchWasActive;
	//UITableView     tableView;
//	
		
}

@property (nonatomic, retain) NSArray *listContent;

@property (nonatomic, retain) NSMutableArray *filteredListContent;

@property (nonatomic, copy) NSString *savedSearchTerm;
@property (nonatomic) NSInteger savedScopeButtonIndex;
@property (nonatomic) BOOL searchWasActive;
//
//@property (nonatomic, retain) UITableView tableView;
@end


