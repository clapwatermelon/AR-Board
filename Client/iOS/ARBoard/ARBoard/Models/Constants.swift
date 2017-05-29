//
//  File.swift
//  ARBoard
//
//  Created by 최유태 on 2017. 4. 6..
//  Copyright © 2017년 YutaeChoi. All rights reserved.
//

import Foundation

enum OAuthDomain {
    case facebook
    case kakao
    var description:String {
        switch self {
        case .facebook:
            return "facebook"
        case .kakao:
            return "kakao"
        }
    }
}

enum RequestType {
    case friend
    case user
    case logout
    
    var description:String {
        switch self {
        case .friend:
            return "friend"
        case .user:
            return "user"
        case .logout:
            return "logout"
        }
    }

}

struct CellIdentifier {
    static let etcBasic: String = "AREtcBasicTableCell"
    static let etcDetail: String = "AREtcDetailTableCell"
    static let etcSubtitle: String = "AREtcSubTitleTableCell"
    static let friendList: String = "ARBFriendTableViewCell"
    static let requestFriendList: String = "ARBFriendRequestTableViewCell"
    
}

struct SegueIdentifier{
    static let mainFromLaunch: String = "ARBMainTabbarControllerFromLaunchViewControllerSegueIdentifier"
    static let signInFromAll: String = "ARBSigninSegueIdentifier"
    static let searchFromFriendList:String = "ARBSearchViewControllerFromFriendListViewControllerSegueIdentifier"
}

struct NotificationName{
    static let shouldShowSignInViewController: NSNotification.Name = NSNotification.Name(rawValue: "showSignInViewContoller")
    
    static let reloadSectionsEtcTableViewController: NSNotification.Name = NSNotification.Name(rawValue: "loginSuccessWillReloadSectionsEtcTableViewController")
    
    static let userStateChange:NSNotification.Name = NSNotification.Name(rawValue: "userStateChange")
}

