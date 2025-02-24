#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoipPCMSourceNative)
namespace Oculus::Platform {
class IVoipPCMSource;
}
// Forward declare root types
namespace Oculus::Platform {
class VoipPCMSourceNative;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::VoipPCMSourceNative);
// Type: Oculus.Platform::VoipPCMSourceNative
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::VoipPCMSourceNative*
class CORDL_TYPE VoipPCMSourceNative : public ::System::Object {
public:
  // Declarations
  /// @brief Field senderID, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_senderID, put = __cordl_internal_set_senderID)) uint64_t senderID;

  /// @brief Convert operator to "::Oculus::Platform::IVoipPCMSource"
  constexpr operator ::Oculus::Platform::IVoipPCMSource*() noexcept;

  /// @brief Method GetPCM, addr 0x19c3f5c, size 0xb0, virtual true, abstract: false, final true
  inline int32_t GetPCM(::ArrayW<float_t, ::Array<float_t>*> dest, int32_t length);

  static inline ::Oculus::Platform::VoipPCMSourceNative* New_ctor();

  /// @brief Method PeekSizeElements, addr 0x19c4014, size 0x90, virtual true, abstract: false, final true
  inline int32_t PeekSizeElements();

  /// @brief Method SetSenderID, addr 0x19c400c, size 0x8, virtual true, abstract: false, final true
  inline void SetSenderID(uint64_t senderID);

  /// @brief Method Update, addr 0x19c40a4, size 0x4, virtual true, abstract: false, final true
  inline void Update();

  constexpr uint64_t const& __cordl_internal_get_senderID() const;

  constexpr uint64_t& __cordl_internal_get_senderID();

  constexpr void __cordl_internal_set_senderID(uint64_t value);

  /// @brief Method .ctor, addr 0x19c346c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Oculus::Platform::IVoipPCMSource"
  constexpr ::Oculus::Platform::IVoipPCMSource* i___Oculus__Platform__IVoipPCMSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipPCMSourceNative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VoipPCMSourceNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VoipPCMSourceNative(VoipPCMSourceNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VoipPCMSourceNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VoipPCMSourceNative(VoipPCMSourceNative const&) = delete;

  /// @brief Field senderID, offset: 0x10, size: 0x8, def value: None
  uint64_t ___senderID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipPCMSourceNative, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipPCMSourceNative, ___senderID) == 0x10, "Offset mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::VoipPCMSourceNative);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipPCMSourceNative*, "Oculus.Platform", "VoipPCMSourceNative");
