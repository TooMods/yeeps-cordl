#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonStream)
namespace Photon::Realtime {
class Player;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonStream;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonStream);
// Type: Photon.Pun::PhotonStream
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonStream*
class CORDL_TYPE PhotonStream : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReading)) bool IsReading;

  __declspec(property(get = get_IsWriting, put = set_IsWriting)) bool IsWriting;

  /// @brief Field <IsWriting>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__IsWriting_k__BackingField, put = __cordl_internal_set__IsWriting_k__BackingField)) bool _IsWriting_k__BackingField;

  /// @brief Field currentItem, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_currentItem, put = __cordl_internal_set_currentItem)) int32_t currentItem;

  /// @brief Field readData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_readData, put = __cordl_internal_set_readData))::ArrayW<::System::Object*, ::Array<::System::Object*>*> readData;

  /// @brief Field writeData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_writeData, put = __cordl_internal_set_writeData))::System::Collections::Generic::List_1<::System::Object*>* writeData;

  /// @brief Method CopyToListAndClear, addr 0x2754a08, size 0xa8, virtual false, abstract: false, final false
  inline bool CopyToListAndClear(::System::Collections::Generic::List_1<::System::Object*>* target);

  /// @brief Method GetWriteStream, addr 0x27548e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Object*>* GetWriteStream();

  static inline ::Photon::Pun::PhotonStream* New_ctor(bool write, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> incomingData);

  /// @brief Method PeekNext, addr 0x2754960, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Object* PeekNext();

  /// @brief Method ReceiveNext, addr 0x2752b8c, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Object* ReceiveNext();

  /// @brief Method ResetWriteStream, addr 0x27548f0, size 0x70, virtual false, abstract: false, final false
  inline void ResetWriteStream();

  /// @brief Method SendNext, addr 0x274ec80, size 0xfc, virtual false, abstract: false, final false
  inline void SendNext(::System::Object* obj);

  /// @brief Method Serialize, addr 0x2754b18, size 0x150, virtual false, abstract: false, final false
  inline void Serialize(ByRef<bool> myBool);

  /// @brief Method Serialize, addr 0x2754c68, size 0x148, virtual false, abstract: false, final false
  inline void Serialize(ByRef<int32_t> myInt);

  /// @brief Method Serialize, addr 0x27552b4, size 0x164, virtual false, abstract: false, final false
  inline void Serialize(ByRef<::Photon::Realtime::Player*> obj);

  /// @brief Method Serialize, addr 0x27556b8, size 0x1148, virtual false, abstract: false, final false
  inline void Serialize(ByRef<::UnityEngine::Quaternion> obj);

  /// @brief Method Serialize, addr 0x2755570, size 0x148, virtual false, abstract: false, final false
  inline void Serialize(ByRef<::UnityEngine::Vector2> obj);

  /// @brief Method Serialize, addr 0x2755418, size 0x158, virtual false, abstract: false, final false
  inline void Serialize(ByRef<::UnityEngine::Vector3> obj);

  /// @brief Method Serialize, addr 0x275516c, size 0x148, virtual false, abstract: false, final false
  inline void Serialize(ByRef<float_t> obj);

  /// @brief Method Serialize, addr 0x2754db0, size 0x12c, virtual false, abstract: false, final false
  inline void Serialize(ByRef<::StringW> value);

  /// @brief Method Serialize, addr 0x2754edc, size 0x148, virtual false, abstract: false, final false
  inline void Serialize(ByRef<char16_t> value);

  /// @brief Method Serialize, addr 0x2755024, size 0x148, virtual false, abstract: false, final false
  inline void Serialize(ByRef<int16_t> value);

  /// @brief Method SetReadStream, addr 0x274fc68, size 0x10, virtual false, abstract: false, final false
  inline void SetReadStream(::ArrayW<::System::Object*, ::Array<::System::Object*>*> incomingData, int32_t pos);

  /// @brief Method SetWriteStream, addr 0x274eb58, size 0x128, virtual false, abstract: false, final false
  inline void SetWriteStream(::System::Collections::Generic::List_1<::System::Object*>* newWriteData, int32_t pos);

  /// @brief Method ToArray, addr 0x2754ab0, size 0x68, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  constexpr bool const& __cordl_internal_get__IsWriting_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsWriting_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_currentItem() const;

  constexpr int32_t& __cordl_internal_get_currentItem();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_readData() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_readData();

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_writeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get_writeData() const;

  constexpr void __cordl_internal_set__IsWriting_k__BackingField(bool value);

  constexpr void __cordl_internal_set_currentItem(int32_t value);

  constexpr void __cordl_internal_set_readData(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_writeData(::System::Collections::Generic::List_1<::System::Object*>* value);

  /// @brief Method .ctor, addr 0x2740b28, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(bool write, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> incomingData);

  /// @brief Method get_Count, addr 0x274ee9c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReading, addr 0x27548d8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsReading();

  /// @brief Method get_IsWriting, addr 0x27548c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsWriting();

  /// @brief Method set_IsWriting, addr 0x27548cc, size 0xc, virtual false, abstract: false, final false
  inline void set_IsWriting(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonStream(PhotonStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonStream(PhotonStream const&) = delete;

  /// @brief Field writeData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ___writeData;

  /// @brief Field readData, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___readData;

  /// @brief Field currentItem, offset: 0x20, size: 0x4, def value: None
  int32_t ___currentItem;

  /// @brief Field <IsWriting>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____IsWriting_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonStream, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ___writeData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ___readData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ___currentItem) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonStream, ____IsWriting_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonStream);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonStream*, "Photon.Pun", "PhotonStream");
