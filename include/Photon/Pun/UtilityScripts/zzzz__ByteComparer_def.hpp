#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteComparer)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class ByteComparer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::ByteComparer);
// Type: Photon.Pun.UtilityScripts::ByteComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::ByteComparer*
class CORDL_TYPE ByteComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<uint8_t>"
  constexpr operator ::System::Collections::Generic::IComparer_1<uint8_t>*() noexcept;

  /// @brief Method Compare, addr 0x1ebe7f0, size 0x20, virtual true, abstract: false, final true
  inline int32_t Compare(uint8_t x, uint8_t y);

  static inline ::Photon::Pun::UtilityScripts::ByteComparer* New_ctor();

  /// @brief Method .ctor, addr 0x1ebe5e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<uint8_t>"
  constexpr ::System::Collections::Generic::IComparer_1<uint8_t>* i___System__Collections__Generic__IComparer_1_uint8_t_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ByteComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ByteComparer(ByteComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ByteComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ByteComparer(ByteComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::ByteComparer, 0x10>, "Size mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::ByteComparer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::ByteComparer*, "Photon.Pun.UtilityScripts", "ByteComparer");
