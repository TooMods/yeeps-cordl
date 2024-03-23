#pragma once
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/ComponentModel/Design/zzzz__ITypeDescriptorFilterService_def.hpp"
#include "System/ComponentModel/zzzz__AttributeCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IComNativeDescriptorHandler_def.hpp"
#include "System/ComponentModel/zzzz__IComponent_def.hpp"
#include "System/ComponentModel/zzzz__ICustomTypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__IExtenderProvider_def.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__RefreshEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__WeakHashtable_def.hpp"
#include "System/Diagnostics/zzzz__BooleanSwitch_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::ComponentModel::ICustomTypeDescriptor*)>(
    &::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18e2b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (
    ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::*)()>(&::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x18e2b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*>::get(), 16));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::__cordl_internal_get__attributeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeArray;
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const&
GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::__cordl_internal_get__attributeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeArray;
}
constexpr void
GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::__cordl_internal_set__attributeArray(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*
GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs,
                                                                                        ::System::ComponentModel::ICustomTypeDescriptor* parent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*>(attrs, parent));
}
inline void GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs,
                                                                                                 ::System::ComponentModel::ICustomTypeDescriptor* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrs, parent);
}
inline ::System::ComponentModel::AttributeCollection* GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::GetAttributes() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor::__TypeDescriptor__AttributeProvider__AttributeTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__AttributeProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__AttributeProvider::*)(
    ::System::ComponentModel::TypeDescriptionProvider*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::__TypeDescriptor__AttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18d6598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__AttributeProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::__TypeDescriptor__AttributeProvider::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__AttributeProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x18e2ad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeProvider*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& System::ComponentModel::__TypeDescriptor__AttributeProvider::__cordl_internal_get__attrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attrs;
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& System::ComponentModel::__TypeDescriptor__AttributeProvider::__cordl_internal_get__attrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attrs;
}
constexpr void System::ComponentModel::__TypeDescriptor__AttributeProvider::__cordl_internal_set__attrs(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attrs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__AttributeProvider*
System::ComponentModel::__TypeDescriptor__AttributeProvider::New_ctor(::System::ComponentModel::TypeDescriptionProvider* existingProvider,
                                                                      ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__AttributeProvider*>(existingProvider, attrs));
}
inline void System::ComponentModel::__TypeDescriptor__AttributeProvider::_ctor(::System::ComponentModel::TypeDescriptionProvider* existingProvider,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attrs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, existingProvider, attrs);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__AttributeProvider::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeProvider*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType, instance);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__AttributeProvider::__TypeDescriptor__AttributeProvider() {}
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)(
    ::System::ComponentModel::IComNativeDescriptorHandler*, ::System::Object*)>(&::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18e2f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x18e2fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18e306c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e3118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18e3120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18e31cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18e3278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)(::System::Type*)>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18e3324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18e33d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18e3484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18e3538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18e35e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e369c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComNativeDescriptorHandler*> const&
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__cordl_internal_set__instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::New_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler, ::System::Object* instance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>(handler, instance));
}
inline void GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler,
                                                                                                            ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler, instance);
}
inline ::System::ComponentModel::AttributeCollection*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object* GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(
    ::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor::__TypeDescriptor__ComNativeDescriptionProvider__ComNativeTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::*)(
    ::System::ComponentModel::IComNativeDescriptorHandler*)>(&::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18d5e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider.get_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComNativeDescriptorHandler* (
    ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::*)()>(&::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::get_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e2e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(),
                                                 "get_Handler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider.set_Handler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::*)(
    ::System::ComponentModel::IComNativeDescriptorHandler*)>(&::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::set_Handler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e2e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), "set_Handler",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::ICustomTypeDescriptor* (::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::*)(::System::Type*, ::System::Object*)>(
        &::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18e2e38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), 11));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::IComNativeDescriptorHandler*& System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::__cordl_internal_get__handler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::IComNativeDescriptorHandler*> const&
System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::__cordl_internal_get__handler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handler;
}
constexpr void System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::__cordl_internal_set__handler(::System::ComponentModel::IComNativeDescriptorHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*
System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::New_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>(handler));
}
inline void System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::_ctor(::System::ComponentModel::IComNativeDescriptorHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline ::System::ComponentModel::IComNativeDescriptorHandler* System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::get_Handler() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), "get_Handler",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComNativeDescriptorHandler*, false>(this, ___internal_method);
}
inline void System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::set_Handler(::System::ComponentModel::IComNativeDescriptorHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), "set_Handler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::GetTypeDescriptor(::System::Type* objectType,
                                                                                                                                                  ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType, instance);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__ComNativeDescriptionProvider::__TypeDescriptor__ComNativeDescriptionProvider() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::Collections::ICollection*)>(&::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18e1058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::*)(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x18e0fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> const& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr void System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__cordl_internal_set__filter(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__cordl_internal_get_FilteredMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const&
System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__cordl_internal_get_FilteredMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr void System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilteredMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*
System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::New_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                             ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>(filter, filteredMembers));
}
inline void System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::_ctor(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                      ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter, filteredMembers);
}
inline bool System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::IsValid(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filter);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__AttributeFilterCacheItem::__TypeDescriptor__AttributeFilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__FilterCacheItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*, ::System::Collections::ICollection*)>(&::System::ComponentModel::__TypeDescriptor__FilterCacheItem::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18e11c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__FilterCacheItem.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__TypeDescriptor__FilterCacheItem::*)(
    ::System::ComponentModel::Design::ITypeDescriptorFilterService*)>(&::System::ComponentModel::__TypeDescriptor__FilterCacheItem::IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18e1084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::Design::ITypeDescriptorFilterService*& System::ComponentModel::__TypeDescriptor__FilterCacheItem::__cordl_internal_get__filterService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterService;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::ITypeDescriptorFilterService*> const&
System::ComponentModel::__TypeDescriptor__FilterCacheItem::__cordl_internal_get__filterService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterService;
}
constexpr void System::ComponentModel::__TypeDescriptor__FilterCacheItem::__cordl_internal_set__filterService(::System::ComponentModel::Design::ITypeDescriptorFilterService* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterService)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ICollection*& System::ComponentModel::__TypeDescriptor__FilterCacheItem::__cordl_internal_get_FilteredMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& System::ComponentModel::__TypeDescriptor__FilterCacheItem::__cordl_internal_get_FilteredMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FilteredMembers;
}
constexpr void System::ComponentModel::__TypeDescriptor__FilterCacheItem::__cordl_internal_set_FilteredMembers(::System::Collections::ICollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FilteredMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__FilterCacheItem*
System::ComponentModel::__TypeDescriptor__FilterCacheItem::New_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                    ::System::Collections::ICollection* filteredMembers) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>(filterService, filteredMembers));
}
inline void System::ComponentModel::__TypeDescriptor__FilterCacheItem::_ctor(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService,
                                                                             ::System::Collections::ICollection* filteredMembers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filterService, filteredMembers);
}
inline bool System::ComponentModel::__TypeDescriptor__FilterCacheItem::IsValid(::System::ComponentModel::Design::ITypeDescriptorFilterService* filterService) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__FilterCacheItem*>::get(), "IsValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::Design::ITypeDescriptorFilterService*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filterService);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__FilterCacheItem::__TypeDescriptor__FilterCacheItem() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::*)(
    ::System::Object*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::Compare)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x18e36a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e3810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
inline void System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::setStaticF_Instance(::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get>(
      std::forward<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>(value));
}
inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get>();
}
inline int32_t System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::Compare(::System::Object* left, ::System::Object* right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, left, right);
}
inline ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer* System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>());
}
inline void System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__MemberDescriptorComparer::__TypeDescriptor__MemberDescriptorComparer() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(
    ::System::ComponentModel::ICustomTypeDescriptor*, ::System::ComponentModel::ICustomTypeDescriptor*)>(&::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x18de9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18e387c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e398c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e3aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e3bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e3cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e3dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::System::Type*)>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x18e3f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(&::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e40b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18e41d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEvents",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)()>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x18e4300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18e4418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetProperties",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18e4548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() noexcept {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(this));
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__cordl_internal_get__primary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const&
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__cordl_internal_get__primary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____primary;
}
constexpr void System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__cordl_internal_set__primary(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____primary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ICustomTypeDescriptor*& System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__cordl_internal_get__secondary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondary;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::ICustomTypeDescriptor*> const&
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__cordl_internal_get__secondary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____secondary;
}
constexpr void System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__cordl_internal_set__secondary(::System::ComponentModel::ICustomTypeDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____secondary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::New_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary, ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>(primary, secondary));
}
inline void System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::_ctor(::System::ComponentModel::ICustomTypeDescriptor* primary,
                                                                                  ::System::ComponentModel::ICustomTypeDescriptor* secondary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ICustomTypeDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetEditor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor*>::get(), "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__MergedTypeDescriptor::__TypeDescriptor__MergedTypeDescriptor() {}
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, ::System::Object*)>(&::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e491c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x18e4de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x18e50c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18e5308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e5518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18e57c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18e59d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::System::Type*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e5be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x18e5e90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x18e6170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e6458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x18e6704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x18e69b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::_ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node,
                                                                                                         ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, instance);
}
inline ::System::ComponentModel::AttributeCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_instance", ty:
// "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Object* _instance) noexcept {
  this->_node = _node;
  this->_instance = _instance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultExtendedTypeDescriptor() {}
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, ::System::Type*, ::System::Object*)>(&::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x18e4d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::AttributeCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x18e6be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x18e6e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18e70c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeConverter* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e72d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18e7584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18e7794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                    "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::System::Type*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e79a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e7c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x18e7efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)()>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x18e81b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (
    ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
    &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x18e845c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
        "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor.System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::*)(::System::ComponentModel::PropertyDescriptor*)>(
        &::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x18e8710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                                 "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::operator ::System::ComponentModel::ICustomTypeDescriptor*() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::ComponentModel::ICustomTypeDescriptor"
constexpr ::System::ComponentModel::ICustomTypeDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::i___System__ComponentModel__ICustomTypeDescriptor() {
  return static_cast<::System::ComponentModel::ICustomTypeDescriptor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::_ctor(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* node, ::System::Type* objectType,
                                                                                                 ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, objectType, instance);
}
inline ::System::ComponentModel::AttributeCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetAttributes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetAttributes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetClassName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetClassName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetComponentName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetComponentName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::ComponentModel::TypeConverter* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetConverter() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetConverter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptor* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetDefaultProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEditor(::System::Type* editorBaseType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEditor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::EventDescriptorCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetEvents(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetProperties(
    ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                  "System.ComponentModel.ICustomTypeDescriptor.GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(this, ___internal_method, attributes);
}
inline ::System::Object*
GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor>::get(),
                                               "System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, pd);
}
// Ctor Parameters [CppParam { name: "_node", ty: "::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_objectType", ty:
// "::System::Type*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_instance", ty: "::System::Object*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor(
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* _node, ::System::Type* _objectType, ::System::Object* _instance) noexcept {
  this->_node = _node;
  this->_objectType = _objectType;
  this->_instance = _instance;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor::__TypeDescriptor__TypeDescriptionNode__DefaultTypeDescriptor() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(
    ::System::ComponentModel::TypeDescriptionProvider*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x18d6fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>,
                                                                        ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::CreateInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x18e4678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetCache)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18e4800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetExtendedTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtendedTypeDescriptor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x18e4870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetExtenderProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*> (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtenderProviders)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18e4924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetFullComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Object*)>(
    &::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetFullComponentName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18e4994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetReflectionType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18e4a04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetRuntimeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Type*)>(
    &::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetRuntimeType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18e4ae0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.GetTypeDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (
    ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Type*, ::System::Object*)>(&::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetTypeDescriptor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18e4bb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode.IsSupportedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::*)(::System::Type*)>(
    &::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::IsSupportedType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18e4d10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*& System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*> const&
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__cordl_internal_set_Next(::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::TypeDescriptionProvider*& System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__cordl_internal_get_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> const&
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__cordl_internal_get_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Provider;
}
constexpr void System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__cordl_internal_set_Provider(::System::ComponentModel::TypeDescriptionProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::New_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>(provider));
}
inline void System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::_ctor(::System::ComponentModel::TypeDescriptionProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider);
}
inline ::System::Object* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType,
                                                                                                       ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                                                                       ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::Collections::IDictionary* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetCache(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(this, ___internal_method, instance);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtendedTypeDescriptor(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, instance);
}
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>
System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetExtenderProviders(::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::ComponentModel::IExtenderProvider*, ::Array<::System::ComponentModel::IExtenderProvider*>*>, false>(this, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetFullComponentName(::System::Object* component) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, component);
}
inline ::System::Type* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetReflectionType(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objectType, instance);
}
inline ::System::Type* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetRuntimeType(::System::Type* objectType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, objectType);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::GetTypeDescriptor(::System::Type* objectType, ::System::Object* instance) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(this, ___internal_method, objectType, instance);
}
inline bool System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::IsSupportedType(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode::__TypeDescriptor__TypeDescriptionNode() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject::*)()>(
    &::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e893c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject* System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject*>());
}
inline void System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptorComObject::__TypeDescriptor__TypeDescriptorComObject() {}
//  Writing Method size for method: ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface::*)()>(
    &::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18e8944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface* System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface*>());
}
inline void System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::__TypeDescriptor__TypeDescriptorInterface::__TypeDescriptor__TypeDescriptorInterface() {}
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::TypeDescriptor::*)()>(&::System::ComponentModel::TypeDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18d5be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComNativeDescriptorHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::IComNativeDescriptorHandler* (*)()>(
    &::System::ComponentModel::TypeDescriptor::get_ComNativeDescriptorHandler)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x18d5bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_ComNativeDescriptorHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.set_ComNativeDescriptorHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::IComNativeDescriptorHandler*)>(
    &::System::ComponentModel::TypeDescriptor::set_ComNativeDescriptorHandler)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18d5d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "set_ComNativeDescriptorHandler", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_ComObjectType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_ComObjectType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18d5c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_ComObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_InterfaceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&::System::ComponentModel::TypeDescriptor::get_InterfaceType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18d60e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_InterfaceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.get_MetadataVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::ComponentModel::TypeDescriptor::get_MetadataVersion)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18d614c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "get_MetadataVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.add_Refreshed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::RefreshEventHandler*)>(&::System::ComponentModel::TypeDescriptor::add_Refreshed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18d61a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "add_Refreshed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RefreshEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.remove_Refreshed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::RefreshEventHandler*)>(
    &::System::ComponentModel::TypeDescriptor::remove_Refreshed)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18d6280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "remove_Refreshed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RefreshEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::AddAttributes)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18d635c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::AddAttributes)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x18d65c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddEditorTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::System::Collections::Hashtable*)>(
    &::System::ComponentModel::TypeDescriptor::AddEditorTable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18d6a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddEditorTable", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x18d5e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::AddProvider)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x18d6794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProviderTransparent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::AddProviderTransparent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x18d8040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProviderTransparent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.AddProviderTransparent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::AddProviderTransparent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18d8148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProviderTransparent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CheckDefaultProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::CheckDefaultProvider)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0x18d821c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CheckDefaultProvider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateAssociation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::CreateAssociation)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x18d8828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "CreateAssociation", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateDesigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::Design::IDesigner* (*)(::System::ComponentModel::IComponent*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::CreateDesigner)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x18d8ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateDesigner", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComponent*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Type*, ::StringW, ::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::CreateEvent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18d9450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Type*, ::System::ComponentModel::EventDescriptor*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::CreateEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x18d94dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::IServiceProvider*, ::System::Type*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
        &::System::ComponentModel::TypeDescriptor::CreateInstance)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x18d9558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateInstance", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IServiceProvider*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Type*, ::StringW, ::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::CreateProperty)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x18d9824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.CreateProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Type*, ::System::ComponentModel::PropertyDescriptor*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::CreateProperty)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x18d98b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Type*, ::System::ComponentModel::AttributeCollection*, ::System::ComponentModel::AttributeCollection*)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::AttributeCollection*, ::System::ComponentModel::AttributeCollection*)>(
    &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::AttributeCollection*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::AttributeCollection*, ::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeConverter*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeConverter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeConverter*, ::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeConverter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::ComponentModel::EventDescriptorCollection*, ::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::ComponentModel::EventDescriptorCollection*, ::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::ComponentModel::PropertyDescriptorCollection*, ::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptorCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.DebugValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::ComponentModel::PropertyDescriptorCollection*, ::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::DebugValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18d9a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptorCollection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.FilterMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::ArrayList* (*)(::System::Collections::IList*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::TypeDescriptor::FilterMembers)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x18d9a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "FilterMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAssociation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetAssociation)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x18d9e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "GetAssociation", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x18d1ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18d25c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::AttributeCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetAttributes)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x18da63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetCache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18dd750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetCache", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18ddf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetClassName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18ddf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetClassName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetClassName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetClassName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x18de060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetClassName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetComponentName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18de148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetComponentName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::GetComponentName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18de1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetComponentName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18de280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18de2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetConverter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x18de3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ConvertFromInvariantString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::StringW)>(
    &::System::ComponentModel::TypeDescriptor::ConvertFromInvariantString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18de4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ConvertFromInvariantString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18de510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18de640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptor* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetDefaultEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18de698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18de784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18de8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultProperty",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDefaultProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetDefaultProperty)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18de90c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Type*, ::StringW)>(
    &::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18da550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetDescriptor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x18daa5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtendedDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ICustomTypeDescriptor* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetExtendedDescriptor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18dac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtendedDescriptor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18dea24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEditor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x18dea8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEditor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetEditor)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x18debf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEditor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x18d29b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::ComponentModel::EventDescriptorCollection* (*)(::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(&::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x18ded74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x18d295c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18df4b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18df51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::EventDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetEvents)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x18defd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetExtenderCollisionSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::ComponentModel::MemberDescriptor*)>(
    &::System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x18dfbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtenderCollisionSuffix", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetFullComponentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetFullComponentName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x18dfeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetFullComponentName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetNodeForBaseType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetNodeForBaseType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18dffa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetNodeForBaseType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x18d2d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Type*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x18e007c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18d2cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x18e02d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>)>(
        &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x18e0994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18e09fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetPropertiesImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ComponentModel::PropertyDescriptorCollection* (*)(::System::Object*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, bool, bool)>(
        &::System::ComponentModel::TypeDescriptor::GetPropertiesImpl)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x18e0344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetPropertiesImpl", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18d64bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::GetProvider)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x18d66ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProvider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetProviderRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeDescriptionProvider* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::GetProviderRecursive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18e0a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProviderRecursive",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x18e0ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.GetReflectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::GetReflectionType)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x18e0bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18d5d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Type*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x18d6a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18dded0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* (*)(::System::Object*, bool)>(
    &::System::ComponentModel::TypeDescriptor::NodeFor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x18d75d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.NodeRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::ComponentModel::TypeDescriptionProvider*)>(
    &::System::ComponentModel::TypeDescriptor::NodeRemove)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x18e0c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineAttributeFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>, ::System::Object*,
                                                        ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineAttributeFilter)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x18df584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineAttributeFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(
        &::System::ComponentModel::TypeDescriptor::PipelineFilter)> {
  constexpr static std::size_t size = 0x18dc;
  constexpr static std::size_t addrs = 0x18dbe74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineInitialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::IDictionary*)>(&::System::ComponentModel::TypeDescriptor::PipelineInitialize)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x18dd7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineInitialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.PipelineMerge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ICollection* (*)(int32_t, ::System::Collections::ICollection*, ::System::Collections::ICollection*, ::System::Object*, ::System::Collections::IDictionary*)>(
        &::System::ComponentModel::TypeDescriptor::PipelineMerge)> {
  constexpr static std::size_t size = 0x1144;
  constexpr static std::size_t addrs = 0x18dad30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineMerge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18e11f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RaiseRefresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::RaiseRefresh)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x18e12a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18e135c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, bool)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x870;
  constexpr static std::size_t addrs = 0x18d77d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x18d6fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Module*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0x18e13b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly*)>(&::System::ComponentModel::TypeDescriptor::Refresh)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x18e1dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveAssociation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RemoveAssociation)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x18e1e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                               "RemoveAssociation", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveAssociations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::ComponentModel::TypeDescriptor::RemoveAssociations)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18e2240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveAssociations",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::RemoveProvider)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18e2314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProvider", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::RemoveProvider)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x18e2424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProvider", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProviderTransparent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Type*)>(
    &::System::ComponentModel::TypeDescriptor::RemoveProviderTransparent)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x18e2500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProviderTransparent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.RemoveProviderTransparent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ComponentModel::TypeDescriptionProvider*, ::System::Object*)>(
    &::System::ComponentModel::TypeDescriptor::RemoveProviderTransparent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x18e2608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProviderTransparent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.ShouldHideMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ComponentModel::MemberDescriptor*, ::System::Attribute*)>(
    &::System::ComponentModel::TypeDescriptor::ShouldHideMember)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18d9dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ShouldHideMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.SortDescriptorArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::IList*)>(&::System::ComponentModel::TypeDescriptor::SortDescriptorArray)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x18e26dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "SortDescriptorArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::TypeDescriptor.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::System::ComponentModel::TypeDescriptor::Trace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x18e27b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTable(::System::ComponentModel::WeakHashtable* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTable() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_providerTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__providerTypeTable(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_providerTypeTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__providerTypeTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_providerTypeTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__defaultProviders(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "_defaultProviders", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::ComponentModel::TypeDescriptor::getStaticF__defaultProviders() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "_defaultProviders",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__associationTable(::System::ComponentModel::WeakHashtable* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::ComponentModel::WeakHashtable*>(value));
}
inline ::System::ComponentModel::WeakHashtable* System::ComponentModel::TypeDescriptor::getStaticF__associationTable() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::WeakHashtable*, "_associationTable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__metadataVersion(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_metadataVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__metadataVersion() {
  return ::cordl_internals::getStaticField<int32_t, "_metadataVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__collisionIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_collisionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::ComponentModel::TypeDescriptor::getStaticF__collisionIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_collisionIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_TraceDescriptor(::System::Diagnostics::BooleanSwitch* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Diagnostics::BooleanSwitch*>(value));
}
inline ::System::Diagnostics::BooleanSwitch* System::ComponentModel::TypeDescriptor::getStaticF_TraceDescriptor() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::BooleanSwitch*, "TraceDescriptor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineInitializeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineInitializeKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineInitializeKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineInitializeKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineMergeKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineMergeKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineMergeKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineMergeKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineFilterKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineFilterKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineFilterKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__pipelineAttributeFilterKeys(::ArrayW<::System::Guid, ::Array<::System::Guid>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineAttributeFilterKeys",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::ArrayW<::System::Guid, ::Array<::System::Guid>*>>(value));
}
inline ::ArrayW<::System::Guid, ::Array<::System::Guid>*> System::ComponentModel::TypeDescriptor::getStaticF__pipelineAttributeFilterKeys() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Guid, ::Array<::System::Guid>*>, "_pipelineAttributeFilterKeys",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF__internalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::getStaticF__internalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "_internalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline void System::ComponentModel::TypeDescriptor::setStaticF_Refreshed(::System::ComponentModel::RefreshEventHandler* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>(
      std::forward<::System::ComponentModel::RefreshEventHandler*>(value));
}
inline ::System::ComponentModel::RefreshEventHandler* System::ComponentModel::TypeDescriptor::getStaticF_Refreshed() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::RefreshEventHandler*, "Refreshed",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get>();
}
inline ::System::ComponentModel::TypeDescriptor* System::ComponentModel::TypeDescriptor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::TypeDescriptor*>());
}
inline void System::ComponentModel::TypeDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::IComNativeDescriptorHandler* System::ComponentModel::TypeDescriptor::get_ComNativeDescriptorHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_ComNativeDescriptorHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::IComNativeDescriptorHandler*, false>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::set_ComNativeDescriptorHandler(::System::ComponentModel::IComNativeDescriptorHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "set_ComNativeDescriptorHandler", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComNativeDescriptorHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_ComObjectType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_ComObjectType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::get_InterfaceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_InterfaceType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method);
}
inline int32_t System::ComponentModel::TypeDescriptor::get_MetadataVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "get_MetadataVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline void System::ComponentModel::TypeDescriptor::add_Refreshed(::System::ComponentModel::RefreshEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "add_Refreshed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RefreshEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void System::ComponentModel::TypeDescriptor::remove_Refreshed(::System::ComponentModel::RefreshEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "remove_Refreshed", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::RefreshEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::AddAttributes(::System::Type* type,
                                                                                                                ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, type, attributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::AddAttributes(::System::Object* instance,
                                                                                                                ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, instance, attributes);
}
inline void System::ComponentModel::TypeDescriptor::AddEditorTable(::System::Type* editorBaseType, ::System::Collections::Hashtable* table) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddEditorTable", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Hashtable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, editorBaseType, table);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::AddProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, instance);
}
inline void System::ComponentModel::TypeDescriptor::AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProviderTransparent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::AddProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "AddProviderTransparent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, instance);
}
inline void System::ComponentModel::TypeDescriptor::CheckDefaultProvider(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CheckDefaultProvider",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::CreateAssociation(::System::Object* primary, ::System::Object* secondary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "CreateAssociation", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, primary, secondary);
}
inline ::System::ComponentModel::Design::IDesigner* System::ComponentModel::TypeDescriptor::CreateDesigner(::System::ComponentModel::IComponent* component, ::System::Type* designerBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateDesigner", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::IComponent*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::Design::IDesigner*, false>(nullptr, ___internal_method, component, designerBaseType);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::CreateEvent(::System::Type* componentType, ::StringW name, ::System::Type* type,
                                                                                                      ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(nullptr, ___internal_method, componentType, name, type, attributes);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::CreateEvent(::System::Type* componentType, ::System::ComponentModel::EventDescriptor* oldEventDescriptor,
                                                                                                      ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(nullptr, ___internal_method, componentType, oldEventDescriptor, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::CreateInstance(::System::IServiceProvider* provider, ::System::Type* objectType,
                                                                                ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes,
                                                                                ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateInstance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IServiceProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, provider, objectType, argTypes, args);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::CreateProperty(::System::Type* componentType, ::StringW name, ::System::Type* type,
                                                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(nullptr, ___internal_method, componentType, name, type, attributes);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::CreateProperty(::System::Type* componentType,
                                                                                                            ::System::ComponentModel::PropertyDescriptor* oldPropertyDescriptor,
                                                                                                            ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "CreateProperty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(nullptr, ___internal_method, componentType, oldPropertyDescriptor, attributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::Type* type, ::System::ComponentModel::AttributeCollection* attributes,
                                                                  ::System::ComponentModel::AttributeCollection* debugAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, attributes, debugAttributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::AttributeCollection* attributes, ::System::ComponentModel::AttributeCollection* debugAttributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributes, debugAttributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::AttributeCollection* attributes, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributes, type);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::AttributeCollection* attributes, ::System::Object* instance, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::AttributeCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, attributes, instance, noCustomTypeDesc);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::TypeConverter* converter, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeConverter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, converter, type);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::TypeConverter* converter, ::System::Object* instance, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeConverter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, converter, instance, noCustomTypeDesc);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::EventDescriptorCollection* events, ::System::Type* type,
                                                                  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, events, type, attributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::EventDescriptorCollection* events, ::System::Object* instance,
                                                                  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::EventDescriptorCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, events, instance, attributes, noCustomTypeDesc);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::PropertyDescriptorCollection* properties, ::System::Type* type,
                                                                  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptorCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, properties, type, attributes);
}
inline void System::ComponentModel::TypeDescriptor::DebugValidate(::System::ComponentModel::PropertyDescriptorCollection* properties, ::System::Object* instance,
                                                                  ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "DebugValidate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptorCollection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, properties, instance, attributes, noCustomTypeDesc);
}
inline ::System::Collections::ArrayList* System::ComponentModel::TypeDescriptor::FilterMembers(::System::Collections::IList* members,
                                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "FilterMembers", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(nullptr, ___internal_method, members, attributes);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetAssociation(::System::Type* type, ::System::Object* primary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAssociation", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, primary);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::AttributeCollection* System::ComponentModel::TypeDescriptor::GetAttributes(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AttributeCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::Collections::IDictionary* System::ComponentModel::TypeDescriptor::GetCache(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetCache", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionary*, false>(nullptr, ___internal_method, instance);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetClassName(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetClassName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, component);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetClassName(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetClassName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetClassName(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetClassName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, componentType);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetComponentName(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetComponentName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, component);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetComponentName(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetComponentName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::TypeConverter* System::ComponentModel::TypeDescriptor::GetConverter(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetConverter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeConverter*, false>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::ConvertFromInvariantString(::System::Type* type, ::StringW stringValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ConvertFromInvariantString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, stringValue);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultEvent(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultEvent(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultEvent(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptor*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultProperty(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultProperty(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultProperty",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::TypeDescriptor::GetDefaultProperty(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDefaultProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Type* type, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, type, typeName);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetDescriptor(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::ICustomTypeDescriptor* System::ComponentModel::TypeDescriptor::GetExtendedDescriptor(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtendedDescriptor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ICustomTypeDescriptor*, false>(nullptr, ___internal_method, component);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetEditor(::System::Object* component, ::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEditor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, component, editorBaseType);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetEditor(::System::Object* component, ::System::Type* editorBaseType, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEditor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, component, editorBaseType, noCustomTypeDesc);
}
inline ::System::Object* System::ComponentModel::TypeDescriptor::GetEditor(::System::Type* type, ::System::Type* editorBaseType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEditor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type, editorBaseType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Type* componentType,
                                                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, componentType, attributes);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::EventDescriptorCollection* System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component,
                                                                                                              ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::EventDescriptorCollection*
System::ComponentModel::TypeDescriptor::GetEvents(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetEvents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::EventDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetExtenderCollisionSuffix(::System::ComponentModel::MemberDescriptor* member) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetExtenderCollisionSuffix", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, member);
}
inline ::StringW System::ComponentModel::TypeDescriptor::GetFullComponentName(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetFullComponentName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, component);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetNodeForBaseType(::System::Type* searchType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetNodeForBaseType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, searchType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type* componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, componentType);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Type* componentType,
                                                                                                                     ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, componentType, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component,
                                                                                                                     ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes);
}
inline ::System::ComponentModel::PropertyDescriptorCollection*
System::ComponentModel::TypeDescriptor::GetProperties(::System::Object* component, ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes, bool noCustomTypeDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProperties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc);
}
inline ::System::ComponentModel::PropertyDescriptorCollection* System::ComponentModel::TypeDescriptor::GetPropertiesImpl(::System::Object* component,
                                                                                                                         ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes,
                                                                                                                         bool noCustomTypeDesc, bool noAttributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetPropertiesImpl", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection*, false>(nullptr, ___internal_method, component, attributes, noCustomTypeDesc, noAttributes);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProvider(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProvider(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::TypeDescriptionProvider* System::ComponentModel::TypeDescriptor::GetProviderRecursive(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetProviderRecursive",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::TypeDescriptionProvider*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, type);
}
inline ::System::Type* System::ComponentModel::TypeDescriptor::GetReflectionType(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "GetReflectionType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, type);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Type* type, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, type, createDelegator);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, instance);
}
inline ::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode* System::ComponentModel::TypeDescriptor::NodeFor(::System::Object* instance, bool createDelegator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeFor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::__TypeDescriptor__TypeDescriptionNode*, false>(nullptr, ___internal_method, instance, createDelegator);
}
inline void System::ComponentModel::TypeDescriptor::NodeRemove(::System::Object* key, ::System::ComponentModel::TypeDescriptionProvider* provider) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "NodeRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, key, provider);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineAttributeFilter(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                           ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> filter,
                                                                                                           ::System::Object* instance, ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineAttributeFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, filter, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineFilter(int32_t pipelineType, ::System::Collections::ICollection* members, ::System::Object* instance,
                                                                                                  ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, instance, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineInitialize(int32_t pipelineType, ::System::Collections::ICollection* members,
                                                                                                      ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineInitialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, members, cache);
}
inline ::System::Collections::ICollection* System::ComponentModel::TypeDescriptor::PipelineMerge(int32_t pipelineType, ::System::Collections::ICollection* primary,
                                                                                                 ::System::Collections::ICollection* secondary, ::System::Object* instance,
                                                                                                 ::System::Collections::IDictionary* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "PipelineMerge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ICollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IDictionary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(nullptr, ___internal_method, pipelineType, primary, secondary, instance, cache);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, component);
}
inline void System::ComponentModel::TypeDescriptor::RaiseRefresh(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RaiseRefresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Object* component) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, component);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Object* component, bool refreshReflectionProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, component, refreshReflectionProvider);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Reflection::Module* _cordl_module) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Module*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _cordl_module);
}
inline void System::ComponentModel::TypeDescriptor::Refresh(::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, assembly);
}
inline void System::ComponentModel::TypeDescriptor::RemoveAssociation(::System::Object* primary, ::System::Object* secondary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(),
                                                                             "RemoveAssociation", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, primary, secondary);
}
inline void System::ComponentModel::TypeDescriptor::RemoveAssociations(::System::Object* primary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveAssociations",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, primary);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProvider(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProvider", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, instance);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProviderTransparent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, type);
}
inline void System::ComponentModel::TypeDescriptor::RemoveProviderTransparent(::System::ComponentModel::TypeDescriptionProvider* provider, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "RemoveProviderTransparent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::TypeDescriptionProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, provider, instance);
}
inline bool System::ComponentModel::TypeDescriptor::ShouldHideMember(::System::ComponentModel::MemberDescriptor* member, ::System::Attribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "ShouldHideMember", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::MemberDescriptor*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Attribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member, attribute);
}
inline void System::ComponentModel::TypeDescriptor::SortDescriptorArray(::System::Collections::IList* infos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "SortDescriptorArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, infos);
}
inline void System::ComponentModel::TypeDescriptor::Trace(::StringW message, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::TypeDescriptor*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message, args);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::TypeDescriptor::TypeDescriptor() {}
