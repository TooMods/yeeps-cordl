#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__CreateGlobalSecondaryIndexAction_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__KeySchemaElement_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Projection_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughput_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.get_IndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_IndexName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12284bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "get_IndexName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.set_IndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_IndexName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12284c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_IndexName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.IsSetIndexName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetIndexName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12284cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "IsSetIndexName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.get_KeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* (
    ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(&::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_KeySchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12284dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "get_KeySchema",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.set_KeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*)>(&::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_KeySchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12284e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_KeySchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.IsSetKeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetKeySchema)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12284ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "IsSetKeySchema",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.get_Projection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Projection* (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_Projection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "get_Projection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.set_Projection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)(::Amazon::DynamoDBv2::Model::Projection*)>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_Projection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_Projection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::Projection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.IsSetProjection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetProjection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1228550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "IsSetProjection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.get_ProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ProvisionedThroughput* (
    ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(&::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_ProvisionedThroughput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(),
                                                 "get_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.set_ProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)(
    ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*)>(&::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_ProvisionedThroughput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_ProvisionedThroughput",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction.IsSetProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetProvisionedThroughput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1228570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(),
                                                 "IsSetProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1228580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__indexName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__indexName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexName;
}
constexpr void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_set__indexName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__keySchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keySchema;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const&
Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__keySchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keySchema;
}
constexpr void
Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keySchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::Projection*& Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__projection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____projection;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Projection*> const& Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__projection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____projection;
}
constexpr void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_set__projection(::Amazon::DynamoDBv2::Model::Projection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____projection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__provisionedThroughput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughput;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const&
Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_get__provisionedThroughput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughput;
}
constexpr void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::__cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedThroughput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_IndexName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "get_IndexName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_IndexName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_IndexName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetIndexName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "IsSetIndexName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_KeySchema() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "get_KeySchema",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_KeySchema", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetKeySchema() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "IsSetKeySchema",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::Projection* Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_Projection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "get_Projection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Projection*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_Projection(::Amazon::DynamoDBv2::Model::Projection* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_Projection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::Projection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetProjection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "IsSetProjection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::get_ProvisionedThroughput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(),
                                               "get_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), "set_ProvisionedThroughput",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::IsSetProvisionedThroughput() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(),
                                               "IsSetProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction* Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>());
}
inline void Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::CreateGlobalSecondaryIndexAction::CreateGlobalSecondaryIndexAction() {}
