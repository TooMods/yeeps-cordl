#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTypes)
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun {
class CustomTypes;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::CustomTypes);
// Type: Photon.Pun::CustomTypes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::CustomTypes*
class CORDL_TYPE CustomTypes : public ::System::Object {
public:
  // Declarations
  /// @brief Field memPlayer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memPlayer, put = setStaticF_memPlayer))::ArrayW<uint8_t, ::Array<uint8_t>*> memPlayer;

  /// @brief Method DeserializePhotonPlayer, addr 0x27398d4, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializePhotonPlayer(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length);

  /// @brief Method Register, addr 0x27395a8, size 0x14c, virtual false, abstract: false, final false
  static inline void Register();

  /// @brief Method SerializePhotonPlayer, addr 0x27396f4, size 0x1e0, virtual false, abstract: false, final false
  static inline int16_t SerializePhotonPlayer(::ExitGames::Client::Photon::StreamBuffer* outStream, ::System::Object* customobject);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_memPlayer();

  static inline void setStaticF_memPlayer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTypes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomTypes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTypes(CustomTypes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTypes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTypes(CustomTypes const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::CustomTypes, 0x10>, "Size mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::CustomTypes);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::CustomTypes*, "Photon.Pun", "CustomTypes");
