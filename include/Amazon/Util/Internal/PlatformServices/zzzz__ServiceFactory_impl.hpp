#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__ServiceFactory_def.hpp"
#include "Amazon/Util/Internal/PlatformServices/zzzz__ServiceFactory_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel::__ServiceFactory__InstantiationModel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel::__ServiceFactory__InstantiationModel() {}
constexpr ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel::Singleton{
  static_cast<int32_t>(0x0)
};
constexpr ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel::InstancePerCall{
  static_cast<int32_t>(0x1)
};
//  Writing Method size for method: ::Amazon::Util::Internal::PlatformServices::ServiceFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::PlatformServices::ServiceFactory::*)()>(
    &::Amazon::Util::Internal::PlatformServices::ServiceFactory::_ctor)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x1fda324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>*&
Amazon::Util::Internal::PlatformServices::ServiceFactory::__cordl_internal_get__instantationMappings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantationMappings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>*> const&
Amazon::Util::Internal::PlatformServices::ServiceFactory::__cordl_internal_get__instantationMappings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instantationMappings;
}
constexpr void Amazon::Util::Internal::PlatformServices::ServiceFactory::__cordl_internal_set__instantationMappings(
    ::System::Collections::Generic::IDictionary_2<::System::Type*, ::Amazon::Util::Internal::PlatformServices::__ServiceFactory__InstantiationModel>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instantationMappings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>*& Amazon::Util::Internal::PlatformServices::ServiceFactory::__cordl_internal_get__singletonServices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singletonServices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>*> const&
Amazon::Util::Internal::PlatformServices::ServiceFactory::__cordl_internal_get__singletonServices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singletonServices;
}
constexpr void
Amazon::Util::Internal::PlatformServices::ServiceFactory::__cordl_internal_set__singletonServices(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singletonServices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Util::Internal::PlatformServices::ServiceFactory::setStaticF__lock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Util::Internal::PlatformServices::ServiceFactory::getStaticF__lock() {
  return ::cordl_internals::getStaticField<::System::Object*, "_lock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>();
}
inline void Amazon::Util::Internal::PlatformServices::ServiceFactory::setStaticF__factoryInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "_factoryInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>(
      std::forward<bool>(value));
}
inline bool Amazon::Util::Internal::PlatformServices::ServiceFactory::getStaticF__factoryInitialized() {
  return ::cordl_internals::getStaticField<bool, "_factoryInitialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>();
}
inline void Amazon::Util::Internal::PlatformServices::ServiceFactory::setStaticF__mappings(::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>*, "_mappings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>(
      std::forward<::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>* Amazon::Util::Internal::PlatformServices::ServiceFactory::getStaticF__mappings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<::System::Type*, ::System::Type*>*, "_mappings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>();
}
inline void Amazon::Util::Internal::PlatformServices::ServiceFactory::setStaticF_Instance(::Amazon::Util::Internal::PlatformServices::ServiceFactory* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::PlatformServices::ServiceFactory*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>(
      std::forward<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>(value));
}
inline ::Amazon::Util::Internal::PlatformServices::ServiceFactory* Amazon::Util::Internal::PlatformServices::ServiceFactory::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::PlatformServices::ServiceFactory*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get>();
}
inline ::Amazon::Util::Internal::PlatformServices::ServiceFactory* Amazon::Util::Internal::PlatformServices::ServiceFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>());
}
inline void Amazon::Util::Internal::PlatformServices::ServiceFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Amazon::Util::Internal::PlatformServices::ServiceFactory::RegisterService(::System::Type* serviceType) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get(), "RegisterService",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, serviceType);
}
template <typename T> inline T Amazon::Util::Internal::PlatformServices::ServiceFactory::GetService() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get(), "GetService",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Type* Amazon::Util::Internal::PlatformServices::ServiceFactory::GetServiceType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::PlatformServices::ServiceFactory*>::get(), "GetServiceType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::PlatformServices::ServiceFactory::ServiceFactory() {}
