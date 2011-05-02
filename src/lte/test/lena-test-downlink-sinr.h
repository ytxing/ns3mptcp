/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2011 Centre Tecnologic de Telecomunicacions de Catalunya (CTTC)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Manuel Requena <manuel.requena@cttc.es>
 */

#ifndef LENA_TEST_DOWNLINK_SINR_H
#define LENA_TEST_DOWNLINK_SINR_H

#include "ns3/test.h"


using namespace ns3;


/**
 * Test 1.1 SINR calculation in downlink
 */
class LenaDownlinkSinrTestSuite : public TestSuite
{
public:
  LenaDownlinkSinrTestSuite ();
};


class LenaDownlinkSinrTestCase : public TestCase
{
  public:
    LenaDownlinkSinrTestCase ();
    virtual ~LenaDownlinkSinrTestCase ();

  private:
    virtual void DoRun (void);
};


#endif /* LENA_TEST_DOWNLINK_SINR_H */