/* Copyright (C) 2015 - 2015 National Aeronautics and Space Administration. All Foreign Rights are Reserved to the U.S. Government.

   This software is provided "as is" without any warranty of any, kind either express, implied, or statutory, including, but not
   limited to, any warranty that the software will conform to, specifications any implied warranties of merchantability, fitness
   for a particular purpose, and freedom from infringement, and any warranty that the documentation will conform to the program, or
   any warranty that the software will be error free.

   In no event shall NASA be liable for any damages, including, but not limited to direct, indirect, special or consequential damages,
   arising out of, resulting from, or in any way connected with the software or its documentation.  Whether or not based upon warranty,
   contract, tort or otherwise, and whether or not loss was sustained from, or arose out of the results of, or use of, the software,
   documentation or services provided hereunder

   ITC Team
   NASA IV&V
   ivv-itc@lists.nasa.gov
*/

#ifndef NOS3_SIM_CMDBUS_BRIDGE_HPP
#define NOS3_SIM_CMDBUS_BRIDGE_HPP

#include <ascii_msg_server.hpp>
#include <sim_i_hardware_model.hpp>

namespace Nos3
{
    class SimCmdBusBridge : public SimIHardwareModel
    {
    public:
        SimCmdBusBridge(const boost::property_tree::ptree& config);
        virtual ~SimCmdBusBridge();
        
        // Reads messages from the server and dispatchers them to the NOS
        // command bus
        virtual void run(void);

    private:

        // Helper methods
        void process_msg(std::string &msg);

        // Server to read JSON messages
        AsciiMsgServer _msg_svr;
    };
}

#endif
