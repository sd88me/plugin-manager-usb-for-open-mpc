#pragma once
#define MPC_MANAGER_VERSION "1.2.2"
// Where this build looks for its own updates. This fork publishes releases here; the upstream project is
// Eurikon/plugin-manager-usb-for-open-mpc.
#ifndef MPC_MANAGER_REPO
#define MPC_MANAGER_REPO "sd88me/plugin-manager-usb-for-open-mpc"
#endif
#ifndef MPC_MANAGER_DEVELOPMENT
#define MPC_MANAGER_DEVELOPMENT 1
#endif
static_assert(MPC_MANAGER_DEVELOPMENT == 0 || MPC_MANAGER_DEVELOPMENT == 1, "Invalid manager build identity");
