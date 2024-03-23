#pragma once
#include "Unity/Services/Qos/Internal/zzzz__IQosResults_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Qos/Internal/zzzz__QosResult_def.hpp"
//  Writing Method size for method: ::Unity::Services::Qos::Internal::IQosResults.GetSortedQosResultsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::Unity::Services::Qos::Internal::QosResult>*>* (
        ::Unity::Services::Qos::Internal::IQosResults::*)(::StringW, ::System::Collections::Generic::IList_1<::StringW>*)>(&::Unity::Services::Qos::Internal::IQosResults::GetSortedQosResultsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Qos::Internal::IQosResults*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Qos::Internal::IQosResults*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Qos::Internal::IQosResults::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Qos::Internal::IQosResults::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::Unity::Services::Qos::Internal::QosResult>*>*
Unity::Services::Qos::Internal::IQosResults::GetSortedQosResultsAsync(::StringW service, ::System::Collections::Generic::IList_1<::StringW>* regions) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Qos::Internal::IQosResults*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IList_1<::Unity::Services::Qos::Internal::QosResult>*>*, false>(
      this, ___internal_method, service, regions);
}
