// This file is generated by Ubpa::USRefl::AutoRefl

#pragma once

#include <USRefl/USRefl.h>

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::CullMode>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::CullMode>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"NONE", Ubpa::Utopia::CullMode::NONE},
		Field{"FRONT", Ubpa::Utopia::CullMode::FRONT},
		Field{"BACK", Ubpa::Utopia::CullMode::BACK},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::CompareFunc>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::CompareFunc>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"NEVER", Ubpa::Utopia::CompareFunc::NEVER},
		Field{"LESS", Ubpa::Utopia::CompareFunc::LESS},
		Field{"EQUAL", Ubpa::Utopia::CompareFunc::EQUAL},
		Field{"LESS_EQUAL", Ubpa::Utopia::CompareFunc::LESS_EQUAL},
		Field{"GREATER", Ubpa::Utopia::CompareFunc::GREATER},
		Field{"NOT_EQUAL", Ubpa::Utopia::CompareFunc::NOT_EQUAL},
		Field{"GREATER_EQUAL", Ubpa::Utopia::CompareFunc::GREATER_EQUAL},
		Field{"ALWAYS", Ubpa::Utopia::CompareFunc::ALWAYS},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::Blend>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::Blend>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"ZERO", Ubpa::Utopia::Blend::ZERO},
		Field{"ONE", Ubpa::Utopia::Blend::ONE},
		Field{"SRC_COLOR", Ubpa::Utopia::Blend::SRC_COLOR},
		Field{"INV_SRC_COLOR", Ubpa::Utopia::Blend::INV_SRC_COLOR},
		Field{"SRC_ALPHA", Ubpa::Utopia::Blend::SRC_ALPHA},
		Field{"INV_SRC_ALPHA", Ubpa::Utopia::Blend::INV_SRC_ALPHA},
		Field{"DEST_ALPHA", Ubpa::Utopia::Blend::DEST_ALPHA},
		Field{"INV_DEST_ALPHA", Ubpa::Utopia::Blend::INV_DEST_ALPHA},
		Field{"DEST_COLOR", Ubpa::Utopia::Blend::DEST_COLOR},
		Field{"INV_DEST_COLOR", Ubpa::Utopia::Blend::INV_DEST_COLOR},
		Field{"SRC_ALPHA_SAT", Ubpa::Utopia::Blend::SRC_ALPHA_SAT},
		Field{"BLEND_FACTOR", Ubpa::Utopia::Blend::BLEND_FACTOR},
		Field{"INV_BLEND_FACTOR", Ubpa::Utopia::Blend::INV_BLEND_FACTOR},
		Field{"SRC1_COLOR", Ubpa::Utopia::Blend::SRC1_COLOR},
		Field{"INV_SRC1_COLOR", Ubpa::Utopia::Blend::INV_SRC1_COLOR},
		Field{"SRC1_ALPHA", Ubpa::Utopia::Blend::SRC1_ALPHA},
		Field{"INV_SRC1_ALPHA", Ubpa::Utopia::Blend::INV_SRC1_ALPHA},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::BlendOp>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::BlendOp>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"ADD", Ubpa::Utopia::BlendOp::ADD},
		Field{"SUBTRACT", Ubpa::Utopia::BlendOp::SUBTRACT},
		Field{"REV_SUBTRACT", Ubpa::Utopia::BlendOp::REV_SUBTRACT},
		Field{"MIN", Ubpa::Utopia::BlendOp::MIN},
		Field{"MAX", Ubpa::Utopia::BlendOp::MAX},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::BlendState>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::BlendState>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"enable", &Ubpa::Utopia::BlendState::enable},
		Field{"src", &Ubpa::Utopia::BlendState::src},
		Field{"dest", &Ubpa::Utopia::BlendState::dest},
		Field{"op", &Ubpa::Utopia::BlendState::op},
		Field{"srcAlpha", &Ubpa::Utopia::BlendState::srcAlpha},
		Field{"destAlpha", &Ubpa::Utopia::BlendState::destAlpha},
		Field{"opAlpha", &Ubpa::Utopia::BlendState::opAlpha},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::StencilOp>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::StencilOp>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"KEEP", Ubpa::Utopia::StencilOp::KEEP},
		Field{"ZERO", Ubpa::Utopia::StencilOp::ZERO},
		Field{"REPLACE", Ubpa::Utopia::StencilOp::REPLACE},
		Field{"INCR_SAT", Ubpa::Utopia::StencilOp::INCR_SAT},
		Field{"DECR_SAT", Ubpa::Utopia::StencilOp::DECR_SAT},
		Field{"INVERT", Ubpa::Utopia::StencilOp::INVERT},
		Field{"INCR", Ubpa::Utopia::StencilOp::INCR},
		Field{"DECR", Ubpa::Utopia::StencilOp::DECR},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::StencilState>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::StencilState>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"enable", &Ubpa::Utopia::StencilState::enable},
		Field{"ref", &Ubpa::Utopia::StencilState::ref},
		Field{"readMask", &Ubpa::Utopia::StencilState::readMask},
		Field{"writeMask", &Ubpa::Utopia::StencilState::writeMask},
		Field{"failOp", &Ubpa::Utopia::StencilState::failOp},
		Field{"depthFailOp", &Ubpa::Utopia::StencilState::depthFailOp},
		Field{"passOp", &Ubpa::Utopia::StencilState::passOp},
		Field{"func", &Ubpa::Utopia::StencilState::func},
	};
};

template<>
struct Ubpa::USRefl::TypeInfo<Ubpa::Utopia::RenderState>
	: Ubpa::USRefl::TypeInfoBase<Ubpa::Utopia::RenderState>
{
	static constexpr AttrList attrs = {};

	static constexpr FieldList fields = {
		Field{"cullMode", &Ubpa::Utopia::RenderState::cullMode},
		Field{"zTest", &Ubpa::Utopia::RenderState::zTest},
		Field{"zWrite", &Ubpa::Utopia::RenderState::zWrite},
		Field{"stencilState", &Ubpa::Utopia::RenderState::stencilState},
		Field{"blendStates", &Ubpa::Utopia::RenderState::blendStates},
		Field{"colorMask", &Ubpa::Utopia::RenderState::colorMask},
	};
};
