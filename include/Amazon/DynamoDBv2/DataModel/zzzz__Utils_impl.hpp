#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__Utils_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBAttribute_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBTableAttribute_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__IDynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__Utils_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1431e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0._IsPrimitive_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::*)(::Amazon::Util::Internal::ITypeInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::_IsPrimitive_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1433e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0*>::get(), "<IsPrimitive>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::Internal::ITypeInfo*& Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::__cordl_internal_get_typeWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::__cordl_internal_get_typeWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeWrapper;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::__cordl_internal_set_typeWrapper(::Amazon::Util::Internal::ITypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0* Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0*>());
}
inline void Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::_IsPrimitive_b__0(::Amazon::Util::Internal::ITypeInfo* ti) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0*>::get(), "<IsPrimitive>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ti);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__Utils____c__DisplayClass3_0::__Utils____c__DisplayClass3_0() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)(int32_t)>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1433458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1433f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1433f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.System_Collections_Generic_IEnumerator_System_Reflection_ConstructorInfo__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_Generic_IEnumerator_System_Reflection_ConstructorInfo__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1434088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
        "System.Collections.Generic.IEnumerator<System.Reflection.ConstructorInfo>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1434090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14340d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.System_Collections_Generic_IEnumerable_System_Reflection_ConstructorInfo__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
        &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_Generic_IEnumerable_System_Reflection_ConstructorInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x14340d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
        "System.Collections.Generic.IEnumerable<System.Reflection.ConstructorInfo>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1434184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>"
constexpr Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::i___System__Collections__Generic__IEnumerable_1___System__Reflection__ConstructorInfo__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>"
constexpr Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::i___System__Collections__Generic__IEnumerator_1___System__Reflection__ConstructorInfo__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Reflection::ConstructorInfo*& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___2__current(::System::Reflection::ConstructorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>&
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get_validConstructorInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validConstructorInputs;
}
constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> const&
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get_validConstructorInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validConstructorInputs;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set_validConstructorInputs(
    ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validConstructorInputs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>&
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___3__validConstructorInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__validConstructorInputs;
}
constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> const&
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___3__validConstructorInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__validConstructorInputs;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___3__validConstructorInputs(
    ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__validConstructorInputs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Util::Internal::ITypeInfo*& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get_typeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get_typeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeInfo;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set_typeInfo(::Amazon::Util::Internal::ITypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Util::Internal::ITypeInfo*& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___3__typeInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__typeInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::ITypeInfo*> const& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___3__typeInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__typeInfo;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___3__typeInfo(::Amazon::Util::Internal::ITypeInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__typeInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>&
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*> const&
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___7__wrap1(
    ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr int32_t const& Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__cordl_internal_set___7__wrap2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
inline ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>(__1__state));
}
inline void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_Generic_IEnumerator_System_Reflection_ConstructorInfo__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
      "System.Collections.Generic.IEnumerator<System.Reflection.ConstructorInfo>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*
Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_Generic_IEnumerable_System_Reflection_ConstructorInfo__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
      "System.Collections.Generic.IEnumerable<System.Reflection.ConstructorInfo>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__Utils___GetConstructors_d__27::__Utils___GetConstructors_d__27() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__Utils____c::*)()>(&::Amazon::DynamoDBv2::DataModel::__Utils____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14341ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__Utils____c.__cctor_b__35_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::ITypeInfo* (::Amazon::DynamoDBv2::DataModel::__Utils____c::*)(::System::Type*)>(
    &::Amazon::DynamoDBv2::DataModel::__Utils____c::__cctor_b__35_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x14341f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c*>::get(), "<.cctor>b__35_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::DataModel::__Utils____c::setStaticF___9(::Amazon::DynamoDBv2::DataModel::__Utils____c* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DataModel::__Utils____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c*>::get>(
      std::forward<::Amazon::DynamoDBv2::DataModel::__Utils____c*>(value));
}
inline ::Amazon::DynamoDBv2::DataModel::__Utils____c* Amazon::DynamoDBv2::DataModel::__Utils____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DataModel::__Utils____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c*>::get>();
}
inline ::Amazon::DynamoDBv2::DataModel::__Utils____c* Amazon::DynamoDBv2::DataModel::__Utils____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__Utils____c*>());
}
inline void Amazon::DynamoDBv2::DataModel::__Utils____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Util::Internal::ITypeInfo* Amazon::DynamoDBv2::DataModel::__Utils____c::__cctor_b__35_0(::System::Type* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__Utils____c*>::get(), "<.cctor>b__35_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::ITypeInfo*, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__Utils____c::__Utils____c() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.IsPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::IsPrimitive)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1431d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "IsPrimitive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ValidatePrimitiveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::ValidatePrimitiveType)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1431e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ValidatePrimitiveType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ValidateVersionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::ValidateVersionType)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0x142c154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ValidateVersionType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetPrimitiveElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::GetPrimitiveElementType)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1431f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetPrimitiveElementType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::GetElementType)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1427f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetElementType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ItemsToCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::DataModel::Utils::ItemsToCollection)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1432044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ItemsToCollection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ItemsToIList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::DataModel::Utils::ItemsToIList)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x14320e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ItemsToIList", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ItemsToArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Type*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::DataModel::Utils::ItemsToArray)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1432834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ItemsToArray", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetTableAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute* (*)(::Amazon::Util::Internal::ITypeInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::GetTableAttribute)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1430584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetTableAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* (*)(::Amazon::Util::Internal::ITypeInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::GetAttribute)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1432990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* (*)(::System::Reflection::MemberInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::GetAttribute)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1432c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*>* (*)(::System::Reflection::MemberInfo*)>(&::Amazon::DynamoDBv2::DataModel::Utils::GetAttributes)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1430604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetSingleDDBAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* (*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::GetSingleDDBAttribute)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1432b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetSingleDDBAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetAttributeObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(::System::Reflection::MemberInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::GetAttributeObjects)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1432c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttributeObjects", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ToLowerCamelCase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::DynamoDBv2::DataModel::Utils::ToLowerCamelCase)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x142f050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ToLowerCamelCase",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.InstantiateConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::InstantiateConverter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x14251c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "InstantiateConverter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.InstantiateArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*, int32_t)>(&::Amazon::DynamoDBv2::DataModel::Utils::InstantiateArray)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x142807c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "InstantiateArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.Instantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::Instantiate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1427e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.InstantiateHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Type*,
                                      ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                               ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::Amazon::DynamoDBv2::DataModel::Utils::InstantiateHelper)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x1432d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "InstantiateHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetConstructors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<
    ::System::Reflection::ConstructorInfo*>* (*)(::Amazon::Util::Internal::ITypeInfo*,
                                                 ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                          ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>)>(
    &::Amazon::DynamoDBv2::DataModel::Utils::GetConstructors)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x14333d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetConstructors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.CanInstantiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::CanInstantiate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1427dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.CanInstantiateArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::CanInstantiateArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1427eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiateArray",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.CanInstantiateConverter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::CanInstantiateConverter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x142c94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiateConverter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.CanInstantiateHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Type*, ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                   ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>)>(
        &::Amazon::DynamoDBv2::DataModel::Utils::CanInstantiateHelper)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x14330f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiateHelper", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                           ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.GetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Reflection::MemberInfo*)>(&::Amazon::DynamoDBv2::DataModel::Utils::GetType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x142b71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.IsReadWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::MemberInfo*)>(&::Amazon::DynamoDBv2::DataModel::Utils::IsReadWrite)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x142d184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "IsReadWrite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::Utils.ImplementsInterface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::Amazon::DynamoDBv2::DataModel::Utils::ImplementsInterface)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x1427a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(),
                                                                               "ImplementsInterface", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::DataModel::Utils::setStaticF_primitiveTypesArray(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "primitiveTypesArray",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> Amazon::DynamoDBv2::DataModel::Utils::getStaticF_primitiveTypesArray() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "primitiveTypesArray",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::Utils::setStaticF_PrimitiveTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "PrimitiveTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>(
      std::forward<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Amazon::DynamoDBv2::DataModel::Utils::getStaticF_PrimitiveTypes() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "PrimitiveTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::Utils::setStaticF_PrimitiveTypeInfos(::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>*, "PrimitiveTypeInfos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>* Amazon::DynamoDBv2::DataModel::Utils::getStaticF_PrimitiveTypeInfos() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::Amazon::Util::Internal::ITypeInfo*>*, "PrimitiveTypeInfos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>();
}
inline void Amazon::DynamoDBv2::DataModel::Utils::setStaticF_validConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                                             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                                        value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                    "validConstructorInputs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>(
      std::forward<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                            ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
Amazon::DynamoDBv2::DataModel::Utils::getStaticF_validConstructorInputs() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                    ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                           "validConstructorInputs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>();
}
inline void
Amazon::DynamoDBv2::DataModel::Utils::setStaticF_validArrayConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                                      ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                                 value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                    "validArrayConstructorInputs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>(
      std::forward<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                            ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
Amazon::DynamoDBv2::DataModel::Utils::getStaticF_validArrayConstructorInputs() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                    ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                           "validArrayConstructorInputs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>();
}
inline void
Amazon::DynamoDBv2::DataModel::Utils::setStaticF_validConverterConstructorInputs(::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                                          ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                                     value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                             ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                    "validConverterConstructorInputs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>(
      std::forward<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                            ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>(value));
}
inline ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
Amazon::DynamoDBv2::DataModel::Utils::getStaticF_validConverterConstructorInputs() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                    ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>,
                                           "validConverterConstructorInputs", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get>();
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::IsPrimitive(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "IsPrimitive", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
template <typename T> inline bool Amazon::DynamoDBv2::DataModel::Utils::IsPrimitive() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "IsPrimitive",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::Utils::ValidatePrimitiveType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ValidatePrimitiveType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type);
}
template <typename T> inline void Amazon::DynamoDBv2::DataModel::Utils::ValidatePrimitiveType() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ValidatePrimitiveType",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::Utils::ValidateVersionType(::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ValidateVersionType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memberType);
}
inline ::System::Type* Amazon::DynamoDBv2::DataModel::Utils::GetPrimitiveElementType(::System::Type* collectionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetPrimitiveElementType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, collectionType);
}
inline ::System::Type* Amazon::DynamoDBv2::DataModel::Utils::GetElementType(::System::Type* collectionType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetElementType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, collectionType);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::ItemsToCollection(::System::Type* targetType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* items,
                                                                    ByRef<::System::Object*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ItemsToCollection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, targetType, items, result);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::ItemsToIList(::System::Type* targetType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* items, ByRef<::System::Object*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ItemsToIList", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, targetType, items, result);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::ItemsToArray(::System::Type* targetType, ::System::Collections::Generic::IEnumerable_1<::System::Object*>* items, ByRef<::System::Object*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ItemsToArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, targetType, items, result);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute* Amazon::DynamoDBv2::DataModel::Utils::GetTableAttribute(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetTableAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBTableAttribute*, false>(nullptr, ___internal_method, targetTypeInfo);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* Amazon::DynamoDBv2::DataModel::Utils::GetAttribute(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*, false>(nullptr, ___internal_method, targetTypeInfo);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* Amazon::DynamoDBv2::DataModel::Utils::GetAttribute(::System::Reflection::MemberInfo* targetMemberInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*, false>(nullptr, ___internal_method, targetMemberInfo);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*>*
Amazon::DynamoDBv2::DataModel::Utils::GetAttributes(::System::Reflection::MemberInfo* targetMemberInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttributes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*>*, false>(nullptr, ___internal_method, targetMemberInfo);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute* Amazon::DynamoDBv2::DataModel::Utils::GetSingleDDBAttribute(::ArrayW<::System::Object*, ::Array<::System::Object*>*> attributes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetSingleDDBAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::DynamoDBAttribute*, false>(nullptr, ___internal_method, attributes);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Amazon::DynamoDBv2::DataModel::Utils::GetAttributeObjects(::System::Reflection::MemberInfo* targetMemberInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetAttributeObjects", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, targetMemberInfo);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::Utils::ToLowerCamelCase(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "ToLowerCamelCase", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::Utils::InstantiateConverter(::System::Type* objectType, ::Amazon::DynamoDBv2::DataModel::IDynamoDBContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "InstantiateConverter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::IDynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectType, context);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::Utils::InstantiateArray(::System::Type* objectType, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "InstantiateArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectType, length);
}
inline ::System::Object* Amazon::DynamoDBv2::DataModel::Utils::Instantiate(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "Instantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectType);
}
/// @param optionalInput: ::ArrayW<::System::Object*,::Array<::System::Object*>*> (default: nullptr)
inline ::System::Object* Amazon::DynamoDBv2::DataModel::Utils::InstantiateHelper(::System::Type* objectType,
                                                                                 ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                                          ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                                     validConstructorInputs,
                                                                                 ::ArrayW<::System::Object*, ::Array<::System::Object*>*> optionalInput) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "InstantiateHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, objectType, validConstructorInputs, optionalInput);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*
Amazon::DynamoDBv2::DataModel::Utils::GetConstructors(::Amazon::Util::Internal::ITypeInfo* typeInfo,
                                                      ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                               ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                          validConstructorInputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetConstructors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*, false>(nullptr, ___internal_method, typeInfo,
                                                                                                                                            validConstructorInputs);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::CanInstantiate(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, objectType);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::CanInstantiateArray(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiateArray",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, objectType);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::CanInstantiateConverter(::System::Type* objectType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiateConverter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, objectType);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::CanInstantiateHelper(::System::Type* objectType,
                                                                       ::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                                ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>
                                                                           validConstructorInputs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "CanInstantiateHelper", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>,
                                                                         ::Array<::ArrayW<::Amazon::Util::Internal::ITypeInfo*, ::Array<::Amazon::Util::Internal::ITypeInfo*>*>>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, objectType, validConstructorInputs);
}
inline ::System::Type* Amazon::DynamoDBv2::DataModel::Utils::GetType(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "GetType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, member);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::IsReadWrite(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(), "IsReadWrite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, member);
}
inline bool Amazon::DynamoDBv2::DataModel::Utils::ImplementsInterface(::System::Type* targetType, ::System::Type* interfaceType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::Utils*>::get(),
                                                                             "ImplementsInterface", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, targetType, interfaceType);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::Utils::Utils() {}
