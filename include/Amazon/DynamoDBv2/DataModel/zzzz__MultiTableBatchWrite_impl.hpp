#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__MultiTableBatchWrite_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__BatchWrite_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::*)(
    ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>)>(&::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x142212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::*)(
    ::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x14221ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::BatchWrite*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite.AddBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::*)(::Amazon::DynamoDBv2::DataModel::BatchWrite*)>(
    &::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::AddBatch)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1422330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::BatchWrite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite.ExecuteHelper
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::*)()>(
    &::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::ExecuteHelper)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x14223d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(),
                                                                               "ExecuteHelper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite.ExecuteHelperAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::ExecuteHelperAsync)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x14225bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite.ExecuteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::ExecuteAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x14227b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*& Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::__cordl_internal_get_allBatches() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allBatches;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> const&
Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::__cordl_internal_get_allBatches() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allBatches;
}
constexpr void Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::__cordl_internal_set_allBatches(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::BatchWrite*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allBatches)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::New_ctor(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>(batches));
}
inline void Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::_ctor(::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> batches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batches);
}
inline ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*
Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::New_ctor(::Amazon::DynamoDBv2::DataModel::BatchWrite* first,
                                                              ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> rest) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>(first, rest));
}
inline void Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::_ctor(::Amazon::DynamoDBv2::DataModel::BatchWrite* first,
                                                                       ::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*> rest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::BatchWrite*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DataModel::BatchWrite*, ::Array<::Amazon::DynamoDBv2::DataModel::BatchWrite*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, first, rest);
}
inline void Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::AddBatch(::Amazon::DynamoDBv2::DataModel::BatchWrite* batch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), "AddBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::BatchWrite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, batch);
}
inline void Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::ExecuteHelper() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(),
                                                                             "ExecuteHelper", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::ExecuteHelperAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), "ExecuteHelperAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task* Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::ExecuteAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite*>::get(), "ExecuteAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::MultiTableBatchWrite::MultiTableBatchWrite() {}
