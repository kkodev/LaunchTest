//
//  ViewController.swift
//  LaunchTest10.2
//
//  Created by Kamil Kocemba on 03/06/2019.
//  Copyright © 2019 Test. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    private var appLaunchTime: Int64? = {
        var processInfo = kinfo_proc()
        var size  = MemoryLayout<kinfo_proc>.stride
        var mib: [Int32] = [CTL_KERN, KERN_PROC, KERN_PROC_PID, getpid()]
        guard sysctl(&mib, u_int(mib.count), &processInfo, &size, nil, 0) == 0 else {
            return nil
        }
        let startTime = processInfo.kp_proc.p_starttime
        return (Int64(startTime.tv_sec) * 1000) + Int64(startTime.tv_usec / 1000)
    }()
    
    private var currentTimeMilliseconds: Int64 {
        var time: timeval = timeval(tv_sec: 0, tv_usec: 0)
        gettimeofday(&time, nil)
        return (Int64(time.tv_sec) * 1000) + Int64(time.tv_usec / 1000)
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        
        guard let appLauchtime = appLaunchTime else {
            return
        }
        
        let durationInSeconds = Double(currentTimeMilliseconds - appLauchtime) / 1000
        let roundedDuration = round(durationInSeconds * 100) / 100
        
        let alertController = UIAlertController(title: "Launch time", message: "Wall clock: \(roundedDuration)s", preferredStyle: .alert)
        present(alertController, animated: true, completion: nil)
    }
    
    
}
