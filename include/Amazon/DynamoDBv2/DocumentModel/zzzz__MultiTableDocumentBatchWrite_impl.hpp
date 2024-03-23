#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__MultiTableDocumentBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DocumentBatchWrite_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite.get_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)()>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::get_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164916c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "get_Batches",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite.set_Batches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::set_Batches)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1649174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1648d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite.AddBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)(
    ::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*)>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::AddBatch)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x164917c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite.ExecuteHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::ExecuteHelper)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1649224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "ExecuteHelper",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite.ExecuteHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)(::System::Threading::CancellationToken)>(
        &::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::ExecuteHelperAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1649288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "ExecuteHelperAsync",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::ExecuteAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x16492fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*&
Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::__cordl_internal_get__Batches_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> const&
Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::__cordl_internal_get__Batches_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Batches_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::__cordl_internal_set__Batches_k__BackingField(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Batches_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::get_Batches() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "get_Batches",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::set_Batches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "set_Batches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::New_ctor(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> batches) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>(batches));
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::_ctor(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*> batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batches);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::AddBatch(::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite* batch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DocumentBatchWrite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batch);
}
inline void Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::ExecuteHelper() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "ExecuteHelper",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::ExecuteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::MultiTableDocumentBatchWrite::MultiTableDocumentBatchWrite() {}
