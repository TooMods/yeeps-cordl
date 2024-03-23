#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticCapabilities)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct HapticCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::HapticCapabilities);
// Type: UnityEngine.XR::HapticCapabilities
// SizeInfo { instance_size: 20, native_size: 24, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::HapticCapabilities
struct CORDL_TYPE HapticCapabilities {
public:
  // Declarations
  __declspec(property(get = get_bufferFrequencyHz)) uint32_t bufferFrequencyHz;

  __declspec(property(get = get_bufferMaxSize)) uint32_t bufferMaxSize;

  __declspec(property(get = get_bufferOptimalSize)) uint32_t bufferOptimalSize;

  __declspec(property(get = get_numChannels)) uint32_t numChannels;

  __declspec(property(get = get_supportsBuffer)) bool supportsBuffer;

  __declspec(property(get = get_supportsImpulse)) bool supportsImpulse;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>*();

  /// @brief Method Equals, addr 0x18f4cd0, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x18f4d60, size 0x8c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::HapticCapabilities other);

  /// @brief Method GetHashCode, addr 0x18f4dec, size 0xc8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_bufferFrequencyHz, addr 0x18f4cb8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bufferFrequencyHz();

  /// @brief Method get_bufferMaxSize, addr 0x18f4cc0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bufferMaxSize();

  /// @brief Method get_bufferOptimalSize, addr 0x18f4cc8, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bufferOptimalSize();

  /// @brief Method get_numChannels, addr 0x18f4ca0, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_numChannels();

  /// @brief Method get_supportsBuffer, addr 0x18f4cb0, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsBuffer();

  /// @brief Method get_supportsImpulse, addr 0x18f4ca8, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsImpulse();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::HapticCapabilities>* i___System__IEquatable_1___UnityEngine__XR__HapticCapabilities_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HapticCapabilities();

  // Ctor Parameters [CppParam { name: "m_NumChannels", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SupportsImpulse", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "m_SupportsBuffer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_BufferFrequencyHz", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_BufferMaxSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferOptimalSize", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr HapticCapabilities(uint32_t m_NumChannels, bool m_SupportsImpulse, bool m_SupportsBuffer, uint32_t m_BufferFrequencyHz, uint32_t m_BufferMaxSize, uint32_t m_BufferOptimalSize) noexcept;

  /// @brief Field m_NumChannels, offset: 0x0, size: 0x4, def value: None
  uint32_t m_NumChannels;

  /// @brief Field m_SupportsImpulse, offset: 0x4, size: 0x1, def value: None
  bool m_SupportsImpulse;

  /// @brief Field m_SupportsBuffer, offset: 0x5, size: 0x1, def value: None
  bool m_SupportsBuffer;

  /// @brief Field m_BufferFrequencyHz, offset: 0x8, size: 0x4, def value: None
  uint32_t m_BufferFrequencyHz;

  /// @brief Field m_BufferMaxSize, offset: 0xc, size: 0x4, def value: None
  uint32_t m_BufferMaxSize;

  /// @brief Field m_BufferOptimalSize, offset: 0x10, size: 0x4, def value: None
  uint32_t m_BufferOptimalSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::HapticCapabilities, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_NumChannels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_SupportsImpulse) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_SupportsBuffer) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_BufferFrequencyHz) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_BufferMaxSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::HapticCapabilities, m_BufferOptimalSize) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::HapticCapabilities, "UnityEngine.XR", "HapticCapabilities");
