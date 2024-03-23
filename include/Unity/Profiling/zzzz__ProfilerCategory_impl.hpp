#pragma once
#include "Unity/Profiling/zzzz__ProfilerCategory_def.hpp"
//  Writing Method size for method: ::Unity::Profiling::ProfilerCategory.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Profiling::ProfilerCategory::*)()>(&::Unity::Profiling::ProfilerCategory::get_Name)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x27e0878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerCategory>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Profiling::ProfilerCategory.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Profiling::ProfilerCategory::*)()>(&::Unity::Profiling::ProfilerCategory::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27e0a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerCategory>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerCategory>::get(), 3));
    return ___internal_method;
  }
};
constexpr uint16_t& Unity::Profiling::ProfilerCategory::__cordl_internal_get_m_CategoryId() {
  return this->___m_CategoryId;
}
constexpr uint16_t const& Unity::Profiling::ProfilerCategory::__cordl_internal_get_m_CategoryId() const {
  return this->___m_CategoryId;
}
constexpr void Unity::Profiling::ProfilerCategory::__cordl_internal_set_m_CategoryId(uint16_t value) {
  this->___m_CategoryId = value;
}
inline ::StringW Unity::Profiling::ProfilerCategory::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerCategory>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Unity::Profiling::ProfilerCategory::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Profiling::ProfilerCategory>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_CategoryId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerCategory::ProfilerCategory(uint16_t m_CategoryId) noexcept {
  this->m_CategoryId = m_CategoryId;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerCategory::ProfilerCategory() {}
