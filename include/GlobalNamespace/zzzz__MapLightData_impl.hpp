#pragma once
#include "GlobalNamespace/zzzz__MapLightData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MapLightData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MapLightData::*)(Il2CppObject*)>(&::GlobalNamespace::MapLightData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f6965c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapLightData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MapLightData::_ctor(Il2CppObject* blocksAndEmission) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MapLightData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Il2CppObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blocksAndEmission);
}
// Ctor Parameters [CppParam { name: "blocksAndEmission", ty: "Il2CppObject*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::MapLightData::MapLightData(Il2CppObject* blocksAndEmission) noexcept {
  this->blocksAndEmission = blocksAndEmission;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MapLightData::MapLightData() {}
