#pragma once

#include <utl/aglParameter.h>
#include <utl/aglParameterList.h>
#include <utl/aglParameterObj.h>
#include <prim/seadSafeString.h>

namespace ksys::phys {

struct RagdollParam : agl::utl::ParameterObj {
    RagdollParam();
    ~RagdollParam() override;

    agl::utl::Parameter<sead::SafeString> contact_point_info;
    agl::utl::Parameter<sead::SafeString> collision_info;
    agl::utl::Parameter<sead::SafeString> ragdoll_setup_file_path;
    sead::FixedSafeString<32> ragdoll_setup_file_stem;

protected:
    void postRead_() override;
};

}  // namespace ksys::phys
