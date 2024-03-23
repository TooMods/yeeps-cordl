#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(vx_evt_tts_injection_ended_t)
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
class IDisposable;
}
namespace Unity::Services::Vivox {
class vx_evt_base_t;
}
namespace Unity::Services::Vivox {
struct vx_tts_destination;
}
// Forward declare root types
namespace Unity::Services::Vivox {
class vx_evt_tts_injection_ended_t;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t);
// Type: Unity.Services.Vivox::vx_evt_tts_injection_ended_t
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: false
// CS Name: ::Unity.Services.Vivox::vx_evt_tts_injection_ended_t*
class CORDL_TYPE vx_evt_tts_injection_ended_t : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_base_, put = set_base_))::Unity::Services::Vivox::vx_evt_base_t* base_;

  __declspec(property(get = get_num_consumers, put = set_num_consumers)) uint32_t num_consumers;

  /// @brief Field swigCMemOwn, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_swigCMemOwn, put = __cordl_internal_set_swigCMemOwn)) bool swigCMemOwn;

  /// @brief Field swigCPtr, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_swigCPtr, put = __cordl_internal_set_swigCPtr))::System::Runtime::InteropServices::HandleRef swigCPtr;

  __declspec(property(get = get_tts_destination, put = set_tts_destination))::Unity::Services::Vivox::vx_tts_destination tts_destination;

  __declspec(property(get = get_utterance_id, put = set_utterance_id)) uint32_t utterance_id;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2805600, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x280570c, size 0x180, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x280566c, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* New_ctor();

  static inline ::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* New_ctor(void* cPtr, bool cMemoryOwn);

  constexpr bool const& __cordl_internal_get_swigCMemOwn() const;

  constexpr bool& __cordl_internal_get_swigCMemOwn();

  constexpr ::System::Runtime::InteropServices::HandleRef const& __cordl_internal_get_swigCPtr() const;

  constexpr ::System::Runtime::InteropServices::HandleRef& __cordl_internal_get_swigCPtr();

  constexpr void __cordl_internal_set_swigCMemOwn(bool value);

  constexpr void __cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef value);

  /// @brief Method .ctor, addr 0x2805c58, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2805454, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(void* cPtr, bool cMemoryOwn);

  /// @brief Method getCPtr, addr 0x28054a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef getCPtr(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* obj);

  /// @brief Method get_base_, addr 0x2805914, size 0xd4, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_evt_base_t* get_base_();

  /// @brief Method get_num_consumers, addr 0x2805a58, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_num_consumers();

  /// @brief Method get_tts_destination, addr 0x2805bf8, size 0x60, virtual false, abstract: false, final false
  inline ::Unity::Services::Vivox::vx_tts_destination get_tts_destination();

  /// @brief Method get_utterance_id, addr 0x2805b28, size 0x60, virtual false, abstract: false, final false
  inline uint32_t get_utterance_id();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_base_, addr 0x280588c, size 0x88, virtual false, abstract: false, final false
  inline void set_base_(::Unity::Services::Vivox::vx_evt_base_t* value);

  /// @brief Method set_num_consumers, addr 0x28059e8, size 0x70, virtual false, abstract: false, final false
  inline void set_num_consumers(uint32_t value);

  /// @brief Method set_tts_destination, addr 0x2805b88, size 0x70, virtual false, abstract: false, final false
  inline void set_tts_destination(::Unity::Services::Vivox::vx_tts_destination value);

  /// @brief Method set_utterance_id, addr 0x2805ab8, size 0x70, virtual false, abstract: false, final false
  inline void set_utterance_id(uint32_t value);

  /// @brief Method swigRelease, addr 0x2805524, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::HandleRef swigRelease(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr vx_evt_tts_injection_ended_t();

public:
  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_tts_injection_ended_t", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  vx_evt_tts_injection_ended_t(vx_evt_tts_injection_ended_t&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "vx_evt_tts_injection_ended_t", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  vx_evt_tts_injection_ended_t(vx_evt_tts_injection_ended_t const&) = delete;

  /// @brief Field swigCPtr, offset: 0x10, size: 0x10, def value: None
  ::System::Runtime::InteropServices::HandleRef ___swigCPtr;

  /// @brief Field swigCMemOwn, offset: 0x20, size: 0x1, def value: None
  bool ___swigCMemOwn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::vx_evt_tts_injection_ended_t, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t, ___swigCPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t, ___swigCMemOwn) == 0x20, "Offset mismatch!");

} // namespace Unity::Services::Vivox
NEED_NO_BOX(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::vx_evt_tts_injection_ended_t*, "Unity.Services.Vivox", "vx_evt_tts_injection_ended_t");
