#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTypesUnity)
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class CustomTypesUnity;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::CustomTypesUnity);
// Type: Photon.Realtime::CustomTypesUnity
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::CustomTypesUnity*
class CORDL_TYPE CustomTypesUnity : public ::System::Object {
public:
  // Declarations
  /// @brief Field memQuarternion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memQuarternion, put = setStaticF_memQuarternion))::ArrayW<uint8_t, ::Array<uint8_t>*> memQuarternion;

  /// @brief Field memVector2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memVector2, put = setStaticF_memVector2))::ArrayW<uint8_t, ::Array<uint8_t>*> memVector2;

  /// @brief Field memVector3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_memVector3, put = setStaticF_memVector3))::ArrayW<uint8_t, ::Array<uint8_t>*> memVector3;

  /// @brief Method DeserializeQuaternion, addr 0x223688c, size 0x280, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeQuaternion(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length);

  /// @brief Method DeserializeVector2, addr 0x223644c, size 0x214, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeVector2(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length);

  /// @brief Method DeserializeVector3, addr 0x223601c, size 0x240, virtual false, abstract: false, final false
  static inline ::System::Object* DeserializeVector3(::ExitGames::Client::Photon::StreamBuffer* inStream, int16_t length);

  /// @brief Method Register, addr 0x2235b68, size 0x2a4, virtual false, abstract: false, final false
  static inline void Register();

  /// @brief Method SerializeQuaternion, addr 0x2236660, size 0x22c, virtual false, abstract: false, final false
  static inline int16_t SerializeQuaternion(::ExitGames::Client::Photon::StreamBuffer* outStream, ::System::Object* customobject);

  /// @brief Method SerializeVector2, addr 0x223625c, size 0x1f0, virtual false, abstract: false, final false
  static inline int16_t SerializeVector2(::ExitGames::Client::Photon::StreamBuffer* outStream, ::System::Object* customobject);

  /// @brief Method SerializeVector3, addr 0x2235e0c, size 0x210, virtual false, abstract: false, final false
  static inline int16_t SerializeVector3(::ExitGames::Client::Photon::StreamBuffer* outStream, ::System::Object* customobject);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_memQuarternion();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_memVector2();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_memVector3();

  static inline void setStaticF_memQuarternion(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_memVector2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_memVector3(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomTypesUnity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomTypesUnity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomTypesUnity(CustomTypesUnity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomTypesUnity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomTypesUnity(CustomTypesUnity const&) = delete;

  /// @brief Field SizeQuat offset 0xffffffff size 0x4
  static constexpr int32_t SizeQuat{ static_cast<int32_t>(0x10) };

  /// @brief Field SizeV2 offset 0xffffffff size 0x4
  static constexpr int32_t SizeV2{ static_cast<int32_t>(0x8) };

  /// @brief Field SizeV3 offset 0xffffffff size 0x4
  static constexpr int32_t SizeV3{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::CustomTypesUnity, 0x10>, "Size mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::CustomTypesUnity);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::CustomTypesUnity*, "Photon.Realtime", "CustomTypesUnity");
