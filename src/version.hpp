#pragma once
#define MPC_MANAGER_VERSION "1.2.2"
// Where this build looks for its own updates. This fork publishes releases here; the upstream project is
// Eurikon/plugin-manager-usb-for-open-mpc.
#ifndef MPC_MANAGER_REPO
#define MPC_MANAGER_REPO "sd88me/plugin-manager-usb-for-open-mpc"
#endif
// The optional on-track plugin manager the welcome screen offers instead of this USB manager (installed from the
// catalog entry MPC_PM_ID, whose download must be this repository's latest stable release; asset names end in
// -mpc-<armv7|aarch64>.zip). Upstream offered poloq's Plugin Manager here.
#ifndef MPC_PM_REPO
#define MPC_PM_REPO "sd88me/openmpc-plugin-manager-g2" // PLACEHOLDER until the release repository is final
#endif
#ifndef MPC_PM_NAME
#define MPC_PM_NAME "Plugin Manager G2"
#endif
#ifndef MPC_PM_ID
#define MPC_PM_ID "plugin-manager"
#endif
#ifndef MPC_MANAGER_DEVELOPMENT
#define MPC_MANAGER_DEVELOPMENT 1
#endif
static_assert(MPC_MANAGER_DEVELOPMENT == 0 || MPC_MANAGER_DEVELOPMENT == 1, "Invalid manager build identity");
