#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__CompModSwitches_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/Diagnostics/zzzz__TraceSwitch_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CompModSwitches.get_CommonDesignerServices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::BooleanSwitch* (*)()>(
    &::System::ComponentModel::CompModSwitches::get_CommonDesignerServices)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1b11180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get(),
                                                                               "get_CommonDesignerServices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CompModSwitches.get_EventLog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceSwitch* (*)()>(&::System::ComponentModel::CompModSwitches::get_EventLog)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1b11254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get(),
                                                                               "get_EventLog", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::ComponentModel::CompModSwitches::setStaticF_commonDesignerServices(::System::Diagnostics::BooleanSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::BooleanSwitch*, "commonDesignerServices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get>(
      std::forward<::System::Diagnostics::BooleanSwitch*>(value));
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::CompModSwitches::getStaticF_commonDesignerServices() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::BooleanSwitch*, "commonDesignerServices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get>();
}
inline void System::ComponentModel::CompModSwitches::setStaticF_eventLog(::System::Diagnostics::TraceSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::TraceSwitch*, "eventLog", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get>(
      std::forward<::System::Diagnostics::TraceSwitch*>(value));
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::CompModSwitches::getStaticF_eventLog() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::TraceSwitch*, "eventLog", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get>();
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::CompModSwitches::get_CommonDesignerServices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get(),
                                                                             "get_CommonDesignerServices", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::BooleanSwitch*, false>(nullptr, ___internal_method);
}
inline ::System::Diagnostics::TraceSwitch* System::ComponentModel::CompModSwitches::get_EventLog() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CompModSwitches*>::get(), "get_EventLog",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceSwitch*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CompModSwitches::CompModSwitches() {}
