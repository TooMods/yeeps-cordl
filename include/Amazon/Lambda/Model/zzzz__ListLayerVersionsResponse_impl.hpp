#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__ListLayerVersionsResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__LayerVersionsListItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse.get_LayerVersions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* (
    ::Amazon::Lambda::Model::ListLayerVersionsResponse::*)()>(&::Amazon::Lambda::Model::ListLayerVersionsResponse::get_LayerVersions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                               "get_LayerVersions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse.set_LayerVersions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListLayerVersionsResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*)>(&::Amazon::Lambda::Model::ListLayerVersionsResponse::set_LayerVersions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(), "set_LayerVersions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse.IsSetLayerVersions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::ListLayerVersionsResponse::*)()>(
    &::Amazon::Lambda::Model::ListLayerVersionsResponse::IsSetLayerVersions)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2bce3e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                               "IsSetLayerVersions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse.get_NextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::ListLayerVersionsResponse::*)()>(
    &::Amazon::Lambda::Model::ListLayerVersionsResponse::get_NextMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                               "get_NextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse.set_NextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListLayerVersionsResponse::*)(::StringW)>(
    &::Amazon::Lambda::Model::ListLayerVersionsResponse::set_NextMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bce444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(), "set_NextMarker",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse.IsSetNextMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::ListLayerVersionsResponse::*)()>(
    &::Amazon::Lambda::Model::ListLayerVersionsResponse::IsSetNextMarker)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bce44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                               "IsSetNextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::ListLayerVersionsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::ListLayerVersionsResponse::*)()>(
    &::Amazon::Lambda::Model::ListLayerVersionsResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2bce45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*& Amazon::Lambda::Model::ListLayerVersionsResponse::__cordl_internal_get__layerVersions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerVersions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*> const&
Amazon::Lambda::Model::ListLayerVersionsResponse::__cordl_internal_get__layerVersions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layerVersions;
}
constexpr void Amazon::Lambda::Model::ListLayerVersionsResponse::__cordl_internal_set__layerVersions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layerVersions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Lambda::Model::ListLayerVersionsResponse::__cordl_internal_get__nextMarker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextMarker;
}
constexpr ::StringW const& Amazon::Lambda::Model::ListLayerVersionsResponse::__cordl_internal_get__nextMarker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextMarker;
}
constexpr void Amazon::Lambda::Model::ListLayerVersionsResponse::__cordl_internal_set__nextMarker(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nextMarker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* Amazon::Lambda::Model::ListLayerVersionsResponse::get_LayerVersions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                             "get_LayerVersions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::ListLayerVersionsResponse::set_LayerVersions(::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(), "set_LayerVersions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::Lambda::Model::LayerVersionsListItem*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::ListLayerVersionsResponse::IsSetLayerVersions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                             "IsSetLayerVersions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Lambda::Model::ListLayerVersionsResponse::get_NextMarker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                             "get_NextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::ListLayerVersionsResponse::set_NextMarker(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(), "set_NextMarker",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::ListLayerVersionsResponse::IsSetNextMarker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                             "IsSetNextMarker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::ListLayerVersionsResponse* Amazon::Lambda::Model::ListLayerVersionsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::ListLayerVersionsResponse*>());
}
inline void Amazon::Lambda::Model::ListLayerVersionsResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::ListLayerVersionsResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::ListLayerVersionsResponse::ListLayerVersionsResponse() {}
