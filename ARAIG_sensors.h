//
//  ARAIG_sensors.h
//  ARAIG
//
//  Created by Alex Wang on 2016-12-02.
//  Student# 118 540 152
//  Email: awang63@myseneca.ca
//
//  Copyright © 2016 Alex Wang. All rights reserved.
//

#ifndef ARAIG_sensors_H
#define ARAIG_sensors_H

#include "Stimulation.h"
#include "Task.h"
namespace ARAIG {
  std::vector<std::string> split(std::string str);
  class ARAIG_sensors{
    std::vector<Stimulation*> stim_list_;
    std::list<Task> task_list_;
    
    void stims_data_positions(std::string input, int num_pos, std::vector<size_t>& list);
  public:
    ARAIG_sensors (std::string stims_filename, std::string tasks_filename);
    ~ARAIG_sensors();
    std::ostream& dump(std::ostream& os);
  };
}
#endif /* ARAIG_sensors_H */
