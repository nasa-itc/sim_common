#ifndef NOS3_BLACKBOARDDATA_HPP
#define NOS3_BLACKBOARDDATA_HPP

/*
** Includes
*/
#include <boost/interprocess/sync/interprocess_mutex.hpp>

/*
** Defines
*/

/*
** Namespace
*/
namespace Nos3
{
    namespace bip = boost::interprocess;

    struct BlackboardData {
        bip::interprocess_mutex mutex;
        double qn[4];
        double wn[3];
        double svb[3];
        double bvb[3];
        double Hvb[3];
        double WhlH[3];
        double GyroRate[3];
        double MagField[3];
        int    CSSValid[6];
        double CSSIllum[6];
        int    FSSValid;
        double FSSSunAng[2];
        int    STValid;
        double STqn[4];
        int    GPSValid;
        int    GPSRollover;
        int    GPSWeek;
        double GPSSec;
        double GPSPosN[3];
        double GPSVelN[3];
        double GPSPosW[3];
        double GPSVelW[3];
        double GPSLng;
        double GPSLat;
        double GPSAlt;
        double AccelAcc[3];
    };

}

#endif
