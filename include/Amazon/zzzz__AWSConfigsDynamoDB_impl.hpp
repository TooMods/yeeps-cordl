#pragma once
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/zzzz__AWSConfigsDynamoDB_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ConversionSchema_def.hpp"
#include "Amazon/Util/zzzz__DynamoDBContextConfig_def.hpp"
//  Writing Method size for method: ::Amazon::AWSConfigsDynamoDB.get_DynamoDBContextTableNamePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::AWSConfigsDynamoDB::get_DynamoDBContextTableNamePrefix)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x12079b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "get_DynamoDBContextTableNamePrefix",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigsDynamoDB.set_DynamoDBContextTableNamePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::AWSConfigsDynamoDB::set_DynamoDBContextTableNamePrefix)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1207a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "set_DynamoDBContextTableNamePrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigsDynamoDB.get_ConversionSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ConversionSchema (*)()>(&::Amazon::AWSConfigsDynamoDB::get_ConversionSchema)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1207adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "get_ConversionSchema",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigsDynamoDB.set_ConversionSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::ConversionSchema)>(&::Amazon::AWSConfigsDynamoDB::set_ConversionSchema)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1207b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "set_ConversionSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConversionSchema>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigsDynamoDB.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::DynamoDBContextConfig* (*)()>(&::Amazon::AWSConfigsDynamoDB::get_Context)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1207b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "get_Context",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::AWSConfigsDynamoDB.set_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Util::DynamoDBContextConfig*)>(&::Amazon::AWSConfigsDynamoDB::set_Context)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1207be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "set_Context", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::DynamoDBContextConfig*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::AWSConfigsDynamoDB::setStaticF__ConversionSchema_k__BackingField(::Amazon::DynamoDBv2::ConversionSchema value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::ConversionSchema, "<ConversionSchema>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get>(std::forward<::Amazon::DynamoDBv2::ConversionSchema>(value));
}
inline ::Amazon::DynamoDBv2::ConversionSchema Amazon::AWSConfigsDynamoDB::getStaticF__ConversionSchema_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::ConversionSchema, "<ConversionSchema>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get>();
}
inline void Amazon::AWSConfigsDynamoDB::setStaticF__Context_k__BackingField(::Amazon::Util::DynamoDBContextConfig* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::DynamoDBContextConfig*, "<Context>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get>(
      std::forward<::Amazon::Util::DynamoDBContextConfig*>(value));
}
inline ::Amazon::Util::DynamoDBContextConfig* Amazon::AWSConfigsDynamoDB::getStaticF__Context_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::Util::DynamoDBContextConfig*, "<Context>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get>();
}
inline ::StringW Amazon::AWSConfigsDynamoDB::get_DynamoDBContextTableNamePrefix() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "get_DynamoDBContextTableNamePrefix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigsDynamoDB::set_DynamoDBContextTableNamePrefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "set_DynamoDBContextTableNamePrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::ConversionSchema Amazon::AWSConfigsDynamoDB::get_ConversionSchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "get_ConversionSchema",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ConversionSchema, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigsDynamoDB::set_ConversionSchema(::Amazon::DynamoDBv2::ConversionSchema value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "set_ConversionSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConversionSchema>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::Amazon::Util::DynamoDBContextConfig* Amazon::AWSConfigsDynamoDB::get_Context() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "get_Context",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::DynamoDBContextConfig*, false>(nullptr, ___internal_method);
}
inline void Amazon::AWSConfigsDynamoDB::set_Context(::Amazon::Util::DynamoDBContextConfig* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::AWSConfigsDynamoDB*>::get(), "set_Context", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::DynamoDBContextConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::AWSConfigsDynamoDB::AWSConfigsDynamoDB() {}
