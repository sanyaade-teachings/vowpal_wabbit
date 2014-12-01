/*
Copyright (c) by respective owners including Yahoo!, Microsoft, and
individual contributors. All rights reserved.  Released under a BSD (revised)
license as described in the file LICENSE.
 */
// This is a learner which does nothing with examples.  Used when VW is used as a compressor.

#include "reductions.h"

using namespace LEARNER;

namespace NOOP {
  learner* setup(vw& all, po::variables_map& vm)
  {
    po::options_description noop_opts("Noop options");
    noop_opts.add_options()
      ("noop","do no learning");
    vm = add_options(all,noop_opts); 
    if(!vm.count("noop"))
      return NULL;

    return new learner();
  }
}
