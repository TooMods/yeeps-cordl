#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__SerializableGuidUtil_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__SerializableGuid_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::SerializableGuidUtil.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::XR::CoreUtils::SerializableGuid (*)(::System::Guid)>(
    &::Unity::XR::CoreUtils::SerializableGuidUtil::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x287f5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::SerializableGuidUtil*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::XR::CoreUtils::SerializableGuid Unity::XR::CoreUtils::SerializableGuidUtil::Create(::System::Guid guid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::SerializableGuidUtil*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::SerializableGuid, false>(nullptr, ___internal_method, guid);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::SerializableGuidUtil::SerializableGuidUtil() {}
