package arboard.game.controller;

import java.util.HashMap;
import java.util.Map;

import javax.servlet.http.HttpSession;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.ResponseBody;

import arboard.game.websocket.GameSocketHandler;

@Controller
public class GameSocketConnectController {

	@Autowired
	GameSocketHandler websocketHandler;
	
	@RequestMapping(value="/game",method=RequestMethod.GET)
	public String connectSocket(HttpSession session){
		System.out.println("Running Game COUNT : "+websocketHandler.gameList.size()); 
		return "/wsclient";
	}
	
	@RequestMapping(value="/game/list",method=RequestMethod.GET)
	public @ResponseBody Object getGameList(HttpSession session){
		
		Map<String,Object> jsonObject = new HashMap<String, Object>();
		jsonObject.put("gameCount", websocketHandler.gameList.size());
		return jsonObject;
	}
	
	@RequestMapping(value="/wstest",method=RequestMethod.GET)
	public String TestEchoSocket(HttpSession session){ 
		return "/wsTest";
	}
	
}
