#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadHandlerRaw)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandlerRaw;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UploadHandlerRaw);
// Type: UnityEngine.Networking::UploadHandlerRaw
// SizeInfo { instance_size: 40, native_size: 24, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Networking {
// Is value type: false
// CS Name: ::UnityEngine.Networking::UploadHandlerRaw*
class CORDL_TYPE UploadHandlerRaw : public ::UnityEngine::Networking::UploadHandler {
public:
  // Declarations
  /// @brief Field m_Payload, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Payload, put = __cordl_internal_set_m_Payload))::Unity::Collections::NativeArray_1<uint8_t> m_Payload;

  /// @brief Method Create, addr 0x30aa4b4, size 0x54, virtual false, abstract: false, final false
  static inline void* Create(::UnityEngine::Networking::UploadHandlerRaw* self, ::cordl_internals::Ptr<uint8_t> data, int32_t dataLength);

  /// @brief Method Dispose, addr 0x30aa6a8, size 0x78, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Networking::UploadHandlerRaw* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::UnityEngine::Networking::UploadHandlerRaw* New_ctor(::Unity::Collections::NativeArray_1<uint8_t> data, bool transferOwnership);

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_m_Payload() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_m_Payload();

  constexpr void __cordl_internal_set_m_Payload(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x30aa508, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x30aa594, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<uint8_t> data, bool transferOwnership);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UploadHandlerRaw();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UploadHandlerRaw", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UploadHandlerRaw(UploadHandlerRaw&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UploadHandlerRaw", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UploadHandlerRaw(UploadHandlerRaw const&) = delete;

  /// @brief Field m_Payload, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___m_Payload;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UploadHandlerRaw, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Networking::UploadHandlerRaw, ___m_Payload) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UploadHandlerRaw);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UploadHandlerRaw*, "UnityEngine.Networking", "UploadHandlerRaw");
